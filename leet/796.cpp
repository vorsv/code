#include<iostream>

using namespace std;

class Solution {
    public:
        Solution(){
            string s="abcde",goal="deabc";
            cout<< rotateString(s,goal)<<endl;
        }
        bool rotateString(string s, string goal) {
            if( (s==goal) || s.length()<=1 ) return true;
        if(s.length() != goal.length()) return false;
                for(int i=0; i<int(s.length()-1); i++){
                    if(rotate(s)==goal) return true;
                    s=rotate(s);
                }
            return 0;
        }
        string rotate(string s){
            return s.substr(1)+s[0];
        }
};
int main(){
    Solution a;
    return 0;
}