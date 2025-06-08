#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            int a = 14;
            cout << numberOfMatches(a);
    }
    int numberOfMatches(int a){
        int c=0;
        while(a!=1){
            c+=ceil(a/2.0);
            a/=2;
        }
        return c;
    }
};

int main(){
    Solution a;
}