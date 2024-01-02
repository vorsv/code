#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
int g = 7 ;
    Solution(){
        cout << isHappy(g);
    }
    bool isHappy(int n) {
        while(n >= 10){
            n = sum(n);
        }
        if ( n == 1 || n == 7 ) return true;
        else return false;
    }
    int sum(int n){
        int s=0,d=0;
        while( n > 0 ){
            s = n % 10;
            n = n / 10;
            d += s * s;
        }
        return d;
    }
};

int main(){
    Solution a;
}