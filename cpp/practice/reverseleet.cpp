#include<iostream>
using namespace std;

class Solution {
    int32_t a;
    public:
    Solution(){
        cout<<" .  : "<< reverse(a);
    }
    int reverse(int32_t x) {
        int up = 2147483646 ,down = -2147483647;
        if (down > x || x > up || x == 2147483647) return 0;
        else if(x < 0 && x >= down) return rev(x*(-1))*(-1);
        else if (x > 0 && x <= up) return rev(x);
        else return 0;
    }
    int rev(int a){
        int b=0;
        while(a > 0){
            b*=10;
            b+=a%10;
            a/=10;
        }
        return b;
    }
};
int main(){
    Solution a;
}
