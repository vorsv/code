#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            string a = "codeleet";
            vector<int> b = { 4,5,6,7,0,2,1,3 };
            cout << restoreString(a,b);
    }
    string restoreString(string a, vector<int> b){
        int n = a.size();
        string g=a;
        for(int z =0; z <n; z ++){
            g[b[z]]=a[z];
        }
        return g;
    }
};

int main(){
    Solution a;
}