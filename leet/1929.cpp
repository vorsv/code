#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            vector<int> a = {1,2,1};
            for(int i : getConcatenation(a) ) cout << i <<endl;
    }
    vector<int> getConcatenation(vector<int>& a){
        vector<int> z=a;
        z.insert(z.end(),a.begin(),a.end());
        return z;
    }
};

int main(){
    Solution a;
}