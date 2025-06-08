#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            vector<string> a = {"ab", "c"};
            vector<string> b = {"a", "bc"};
            cout << arrayStringsAreEqual(a,b);
    }
    bool arrayStringsAreEqual(vector<string> a, vector<string> b){
        string f,p;
        for(auto i : a) f+=i;
        for(auto i : b) p+=i;
        return f==p;
    }
};

int main(){
    Solution a;
}