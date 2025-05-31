#include<bits/stdc++.h>

class Solution {
public:
    Solution(){
        std::cout << subtractProductAndSum(234);
    }
    int subtractProductAndSum(int n) {
        int s=0, m=1;
        if(n == 0 ) return 0;
        while(n>0){
            int h = n%10;
            s += h;
            m *= h;
            n /= 10;
        }
        return m-s;
    }
};

int main(){
    Solution a;
}
