#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            int a = 752 ;
            int b = 904 ;
            int c = 164 ;
            for(int i: quadraticRoots(a ,b ,c)) cout << i <<endl;
        }
        vector<int> quadraticRoots(int a, int b, int c) {
            float d = (b*b)-4*a*c;
            if (d<0) return {-1};
            int r1 = int(floor((-b+sqrt(d))/(2*a))) ,r2 = int(floor((-b-sqrt(d))/(2*a)));
            if(r1>r2) return {r1,r2};
            return {r2,r1};        
    
        }
};
int main(){
    Solution a;
    return 0;
}