#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            vector<int> a = { 5,2,0,3,1 };
            for(int i : findArray(a) ) cout << i << " ";
    }
    vector<int> findArray(vector<int>& a){
        vector<int> z;
        int x = 0;
        for (int i :a){
            cout << x << " " << i << " " << (i^x) << "\n";
            x = x ^ i;
            z.push_back(x);
        }
        return z;
    }
};

int main(){
    Solution a;
}