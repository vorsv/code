#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            vector<string> b = {"abc","bcd","aaaa","cbc"};
            char a = 'a';
            for(int i : findWordsContaining(b,a) ) cout << i <<endl;
    }
    vector<int> findWordsContaining(vector<string>& b,char x){
        vector<int> z;
        int bn = b.size();

        for(int i = 0 ; i< bn; i++) for(int j=0; j<b[i].size();j++) if( b[i][j] == x ){
            cout << x  << " " << b[j] << " " << b[j][i] << "\n";
            z.push_back(i);
            break;
        }
        
        return z;
    }
};

int main(){
    Solution a;
}