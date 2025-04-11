#include <iostream>
#include <string>
#include <unordered_set>
#include <queue>
#include <curl/curl.h>
#include <libxml/HTMLparser.h>
#include <vector>

std::unordered_set<std::string> visited_urls;
std::vector<std::string> json_files;
std::vector<std::string> csv_files;

// Callback for libcurl
static size_t WriteCallback(void *contents, size_t size, size_t nmemb, std::string *output) {
    size_t total_size = size * nmemb;
    output->append((char*)contents, total_size);
    return total_size;
}

// URL joining function
std::string urljoin(const std::string &base, const std::string &relative) {
    if (relative.empty()) return base;
    if (relative.find("://") != std::string::npos) return relative;
    
    std::string result = base;
    
    if (relative[0] == '/') {
        // Absolute path
        size_t protocol_end = base.find("://");
        size_t domain_end = base.find('/', protocol_end + 3);
        if (domain_end == std::string::npos) {
            result = base + relative;
        } else {
            result = base.substr(0, domain_end) + relative;
        }
    } else {
        // Relative path
        if (result.back() != '/') {
            size_t last_slash = result.rfind('/');
            if (last_slash > result.find("://") + 2) {
                result = result.substr(0, last_slash + 1);
            } else {
                result += '/';
            }
        }
        result += relative;
    }
    
    // Remove duplicate slashes
    size_t pos;
    while ((pos = result.find("//", result.find("://") + 3)) != std::string::npos) {
        result.replace(pos, 2, "/");
    }
    
    return result;
}

// Check for JSON/CSV files
void check_data_files(const std::string &url) {
    if (url.find(".json") != std::string::npos) {
        json_files.push_back(url);
        std::cout << "[JSON] Found: " << url << std::endl;
    } else if (url.find(".csv") != std::string::npos) {
        csv_files.push_back(url);
        std::cout << "[CSV] Found: " << url << std::endl;
    }
}

// Extract domain from URL
std::string extract_domain(const std::string &url) {
    size_t start = url.find("://");
    if (start == std::string::npos) start = 0;
    else start += 3;
    
    size_t end = url.find('/', start);
    if (end == std::string::npos) end = url.length();
    
    size_t port_pos = url.find(':', start);
    if (port_pos != std::string::npos && port_pos < end) {
        end = port_pos;
    }
    
    return url.substr(start, end - start);
}

// Check if URL should be crawled
bool should_crawl(const std::string &url, const std::string &target_domain) {
    if (url.empty()) return false;
    if (url.find("mailto:") == 0) return false;
    if (url.find("tel:") == 0) return false;
    if (url.find("javascript:") == 0) return false;
    
    std::string domain = extract_domain(url);
    return domain == target_domain;
}

// Extract links from HTML
void extract_links(const std::string &html, const std::string &base_url, 
                  std::queue<std::string> &url_queue, const std::string &target_domain) {
    htmlDocPtr doc = htmlReadDoc((const xmlChar*)html.c_str(), NULL, NULL, 
                               HTML_PARSE_RECOVER | HTML_PARSE_NOERROR | HTML_PARSE_NOWARNING);
    if (!doc) return;

    xmlNodePtr root = xmlDocGetRootElement(doc);
    std::queue<xmlNodePtr> nodes;
    nodes.push(root);

    while (!nodes.empty()) {
        xmlNodePtr node = nodes.front();
        nodes.pop();

        for (; node; node = node->next) {
            if (node->type == XML_ELEMENT_NODE) {
                if (node->name && (xmlStrEqual(node->name, (const xmlChar*)"a") || 
                                  xmlStrEqual(node->name, (const xmlChar*)"link"))) {
                    xmlChar *href = xmlGetProp(node, (const xmlChar*)"href");
                    if (href) {
                        std::string link((char*)href);
                        xmlFree(href);

                        if (link.empty()) continue;

                        // Normalize URL
                        if (link.find("http") != 0 && link.find("://") == std::string::npos) {
                            link = urljoin(base_url, link);
                        }

                        // Remove fragments
                        size_t fragment_pos = link.find('#');
                        if (fragment_pos != std::string::npos) {
                            link = link.substr(0, fragment_pos);
                        }

                        // Check for data files
                        check_data_files(link);

                        // Add to queue if valid
                        if (should_crawl(link, target_domain)) {
                            if (visited_urls.find(link) == visited_urls.end()) {
                                visited_urls.insert(link);
                                url_queue.push(link);
                                std::cout << "[+] Found: " << link << std::endl;
                            }
                        }
                    }
                }
                if (node->children) {
                    nodes.push(node->children);
                }
            }
        }
    }
    xmlFreeDoc(doc);
}

// Fetch URL content
bool fetch_url(const std::string &url, std::string &html) {
    CURL *curl = curl_easy_init();
    if (!curl) return false;

    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &html);
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
    curl_easy_setopt(curl, CURLOPT_USERAGENT, "Mozilla/5.0");
    curl_easy_setopt(curl, CURLOPT_TIMEOUT, 10L);
    curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);

    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) {
        std::cerr << "CURL error: " << curl_easy_strerror(res) << std::endl;
        curl_easy_cleanup(curl);
        return false;
    }

    long http_code = 0;
    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &http_code);
    curl_easy_cleanup(curl);

    return (http_code == 200);
}

// Main crawl function
void crawl(const std::string &start_url) {
    std::queue<std::string> url_queue;
    url_queue.push(start_url);
    visited_urls.insert(start_url);
    std::string target_domain = extract_domain(start_url);

    std::string fixed_url = start_url;
    if (fixed_url.find("://") == std::string::npos) {
        fixed_url = "http://" + fixed_url;
    }

    while (!url_queue.empty()) {
        std::string current_url = url_queue.front();
        url_queue.pop();

        std::cout << "[*] Crawling: " << current_url << std::endl;

        std::string html;
        if (fetch_url(current_url, html)) {
            extract_links(html, current_url, url_queue, target_domain);
        } else {
            std::cerr << "[-] Failed to fetch: " << current_url << std::endl;
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <URL>" << std::endl;
        return 1;
    }

    curl_global_init(CURL_GLOBAL_DEFAULT);
    crawl(argv[1]);
    curl_global_cleanup();

    std::cout << "\n=== Crawling Results ===" << std::endl;
    std::cout << "[+] Found " << visited_urls.size() << " unique URLs." << std::endl;
    std::cout << "[+] Found " << json_files.size() << " JSON files." << std::endl;
    std::cout << "[+] Found " << csv_files.size() << " CSV files." << std::endl;

    if (!json_files.empty()) {
        std::cout << "\nJSON Files:" << std::endl;
        for (const auto& file : json_files) {
            std::cout << "  " << file << std::endl;
        }
    }

    if (!csv_files.empty()) {
        std::cout << "\nCSV Files:" << std::endl;
        for (const auto& file : csv_files) {
            std::cout << "  " << file << std::endl;
        }
    }

    return 0;
}