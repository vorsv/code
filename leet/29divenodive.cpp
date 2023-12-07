#include<iostream>

class Solution {
    int c=0,a=7,b=-3;
public:
    Solution(){
        std::cout<<divide(a,b);;
    }
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        bool sign = (dividend<0 ^ divisor<0)?1:0;
        std::cout<<sign<<" ";
        dividend = abs(dividend);
        divisor = abs(divisor);
        while(dividend >= divisor){
            c++;
            dividend=dividend-divisor;
        }
        if (sign) return -c;
        else return c;
    }
};

int main (){
    Solution s;
}