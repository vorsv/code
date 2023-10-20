#include<iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
    return (x!=1)?(((n!=0))?((n>0)?pow(x,n):(1/(pow(x,abs(n))))):(1)):(1);
    }
    double pow(double x, int n){
    //     if(n!=0)
    //     return x * pow(x, n - 1);
    //     else
    //     return 1;
    // }
    return (n!=0)?(x * pow(x, n - 1)):(1);}
};
int main(){
    Solution a;
    cout << "nigga :" << a.myPow(2,-10);
    }