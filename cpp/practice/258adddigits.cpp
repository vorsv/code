#include<iostream>
using namespace std;

class Solution {
public:
int g = 38 ;
    Solution(){
        cout << addDigits(g);
    }
    int addDigits(int n) {
        while(n >= 10){
            n = sum(n);
        }
        return n;
    }
    int sum(int n){
        int s=0,d=0;
        while( n > 0 ){
            s = n % 10;
            n = n / 10;
            d += s;
        }
        return d;
    }
};

int main(){
    Solution a;
}