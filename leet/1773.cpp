#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            vector<vector<string>> a = {{"phone","blue","pixel"},{"computer","silver","lenovo"},{"phone","gold","iphone"}};
            string b = "color";
            string c = "silver";
            cout << countMatches(a,b,c);
    }
    int countMatches(vector<vector<string>> a, string b, string c){
        int f=0;
        int id = ( b == "type")?0:(( b == "color" )?1:2);
        for(auto i: a) if( i[id] == c ) f++;
        return f;
    }
};

int main(){
    Solution a;
}