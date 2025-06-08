#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            vector<int> a = { 1,2,3,4 };
            for(int i : runningSum(a) ) cout << i <<endl;
    }
    vector<int> runningSum(vector<int>& a){
        vector<int> z;
        int g=0;
        for(int i : a) g+=i,z.push_back(g);
        return z;
    }
};

int main(){
    Solution a;
}