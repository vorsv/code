#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            vector<string> a = { "h" };
            cout << mostWordsFound(a);
    }
    int mostWordsFound(vector<string> a){
        int max=-1,curr=0;
        for(auto i : a){
            for(auto j : i) {
                if(j==' ') {
                    curr++;
                    max=(max<curr && curr!=0)?curr:max;
                }
            }
            curr=0;        
        } 
        return (max==-1)?(-1):(max+1);
    }
};

int main(){
    Solution a;
}