#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            int a = 10;
            int b = 3;
            cout << differenceOfSums(a,b);
    }
    int differenceOfSums(int a, int b){
        int d=0;

        for (int i = 0; i < a; i++) if((i+1)%b==0)d+=(i+1);
        
        return (((a)*(a+1))/2)-(d+d);
    }
};

int main(){
    Solution a;
}