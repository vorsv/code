#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            vector<int> a = {1,2,3,4,5};
            int t = 2;
            for(int i : stableMountains(a,t) ) cout << i <<endl;
    }
    vector<int> stableMountains(vector<int> a,int t){
        vector<int> z;
        int n = a.size();
        for (int i = 1; i < n; i++) if(a[i-1]>t) z.push_back(i);
        return z;
    }
};

int main(){
    Solution a;
}