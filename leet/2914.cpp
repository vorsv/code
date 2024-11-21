#include<iostream>
#include <string>

using namespace std;

class Solution {
    public:
        Solution(){
            string s = "1001";
            cout<< minChanges(s)<<endl;
        }
        int minChanges(string s) {
            int c=0;
            for(int i=0; i<s.length();i+=2){
                if(s[i]!=s[i+1]) s[i+1]=s[i], c++;
            }
            return c;
        }
        void beauti(string s,int pos,int *c) {
            if(s[pos]==0) s[pos] = 1;
            else s[pos] = 0;
            c++;
        }
};
int main(){
    Solution a;
    return 0;
}