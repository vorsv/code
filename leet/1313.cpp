#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            vector<int> a = { 1,2,3,4 };
            for(int i : decompressRLElist(a) ) cout << i <<endl;
    }
    vector<int> decompressRLElist(vector<int> a){
        vector<int> z;
        int o=a.size();
        for(int i=0; i<o; i+=2){
            for(int j=0; j<a[i];j++) z.push_back(a[i+1]);
        }
        return z;
    }
};

int main(){
    Solution a;
}