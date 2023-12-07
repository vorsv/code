#include<iostream>
using namespace std;

class Solution {
public:
    double myPow(int x, int n) {
    return (x!=1)?(((n!=0))?((n>0)?(x<<n):(1/(x<<abs(n)))):(1)):(1);
    }
    double pow(double x, int n){
        double y=x;
        for(int i = 0;i<n-1;i++){
            x*=y;
        }
        return x;
    }
};
int main(){
    Solution a;
    cout << "nigga :" << a.myPow(2,31);
    }