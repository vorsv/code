#include<iostream>
using namespace std;


class Solution {
    public:
    int u=0;
        float sqrt(double a, double b){
            if (u < 30){
                double b1 = (b + (a/b))/2;
                u++;
                return sqrt(a,b1);
            }
            else{
                return b;
            }
        }
        float sqrt(double a){
            double b=a/2;
            return sqrt(a,b);
        }
        double mySqrt(double a){
            return sqrt (a);
        }
};
int main(){
    Solution e;
    cout << e.mySqrt(2147395599);
    return 0;
}