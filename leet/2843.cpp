#include<iostream>
using namespace std;

class Solution {
public:
    Solution(){
        cout<< countSymmetricIntegers(0,100);
    }
    int countSymmetricIntegers(int low, int high) {
        cout << "in func";
        int c=0;
        while(low<high){
            if(isSymmetric(low)) c++;
            if(isSymmetric(high)) c++;
            low++;
            high--;
        }
        return c;
    }
    bool isSymmetric(int k){
        int n = std::to_string(k).length();
        if(n%2!=0)return 0;
        n=10^(n/2);
        int k1 = k/n,k2 = k%n;
        if( sumd(k1)==sumd(k2) ) return 1;
    }
    int sumd(int a){
        int s=0;
        while(a>0){
            s=a%10;
            a/=10;
        }
        return s;
    }
};

int main(){
    Solution a;
    return 0;
}