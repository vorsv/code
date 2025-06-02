#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            vector<int> a = {4,2,1,1,2};
            int e = 1;
            for(bool i : kidsWithCandies(a,e) ) cout << i <<endl;
    }
    vector<bool> kidsWithCandies(vector<int>& a, int e){
        vector<bool> z;

        int g = *max_element(a.begin(),a.end()) - e;
        for(int i : a) if( g <= i ) z.push_back(true);
        else z.push_back(false);

        return z;
    }
};

int main(){
    Solution a;
}