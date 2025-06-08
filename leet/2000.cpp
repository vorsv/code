#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            string a = "abcdefd";
            char b = 'z';
            cout << reversePrefix(a,b);
    }
    string reversePrefix(string a, char b){
        int n = a.size(),i=0;
        auto it = a.begin();
        for (; i < n; i++) if(a[i]==b) {
            advance(it, i+1);
            reverse(a.begin(),it);
            return a;
        }
        return a;
    }
};

int main(){
    Solution a;
}