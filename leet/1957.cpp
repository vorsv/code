#include<iostream>

using namespace std;

class Solution {
public:
    Solution(){
        string a = "aaabaaaa";
        cout << makeFancyString1(a);
    }
    string makeFancyString(string s) {
        int i=1;
        while(s[i+1] !='\0'){
            cout << i << " " << s << "\n";
            if((s[i] == s[i-1]) && (s[i] == s[i+1])) {
                s.erase(i--,1);
            cout << i << " " << s << "\n";
            }
            i++;
        }
        return s;
    }

    string makeFancyString1(string s) {// gpt code
    int i = 1;
    for (int a = 1; a < s.length(); a++) {
        if (s[a] != s[a - 1] || s[a] != s[a + 1]) {
            s[i++] = s[a];
        }
    }
    s.resize(i);
    return s;
}
};

int main(){
    Solution a;
    return 0;
}