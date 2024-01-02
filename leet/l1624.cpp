#include<iostream>

class Solution {
std::string a = "mgntdygtxrvxjnwksqhxuxtrv";
int n = a.size()-1;
public:
    Solution(){
        std::cout << maxLengthBetweenEqualCharacters(a);
    }
    // int maxLengthBetweenEqualCharacter(std::string s) {
    //     int i=0,r=-1;
    //     while(s[i]!='\0'){
    //         std::cout<<a[i]<<n<<a[n-i]<<r<<"\n";
    //         if(s[i]==s[n-i]){
    //             (r=(n-(2*i))-1);
    //             break;
    //         }
    //         i++;
    //     }
    //     return r;
    // }
    int maxLengthBetweenEqualCharacters(std::string s) {
        int i=0,r=-1,j=n;
        for( i=0 ; i<=n ; i++ ){
            std::cout <<i<<" in i\n";
            for( j=n ; j!=i ; j-- ){
                std::cout <<j<<" in j\n";
                std::cout << a[i] <<" "<< a[j] <<" "<<"\n";
                if(a[i]==a[j]){
                    if (r<j-1-i) r=j-1-i;
                }
            }
        }
        return r;
    }
};

int main(){
    Solution sol;
}