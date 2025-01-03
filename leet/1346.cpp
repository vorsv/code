#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            vector<int> a = {-2,0,10,-19,4,6,-8};
            cout<< checkIfExist(a)<<endl;
        }
        bool checkIfExist(vector<int> a) {
            int n = a.size();
            for(int i=0;i<n;i++)for(int j=0;j<n;j++) if(a[i]==a[j]*2 && i!=j) return true; 
            return 0;
        }
};
int main(){
    Solution a;
    return 0;
}