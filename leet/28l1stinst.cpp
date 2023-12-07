#include<iostream>
#include<string.h>

class Solution {
public:
    std::string a="mississippi",b="issip";
    Solution(){
        std::cout<<strStr(a,b);
    }
    int strStr(std::string haystack, std::string needle) {
        int i=0,j=0,n0=0;
        while(haystack[i]!='\0' && needle[j]!='\0'){
            if(haystack[i]==needle[j]){
                std::cout<<"\nin if "<<haystack[i]<<" "<<i;
                i++;
                j++;
                n0=i;
            }
            else{
                std::cout<<"\nreset "<<i<<" "<<n0;
                i++;
                j=0;
                n0=-1;
            }
        }
        return (n0==-1)?n0:((0!=1)?(n0-needle.size()):0);
    }
};

int main(){
    Solution s;
}
