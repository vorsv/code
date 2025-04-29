#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            long long a = 1;
            long long b = 18611;
            cout<< multiplicationUnderModulo(a ,b)<<endl;
        }
        int multiplicationUnderModulo(long long a, long long b) {
            return ((a%1000000007)*(b%1000000007))%1000000007;
        }
};
int main(){
    Solution a;
    return 0;
}