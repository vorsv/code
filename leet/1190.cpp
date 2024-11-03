#include<iostream>
#include <string>

using namespace std;

class Solution {
    public:
        Solution(){
            string s = "(ed(et(oc))el)";
            cout<< reverseParantheses(s)<<endl;
        }
        string reverseParantheses(string s) {
            string stk;
            for(char c: s){
                if (c=='(') stk.push_back(c);
                else if (c==')'){
                    string temp;
                    while (stk.back()!= '(') {
                        temp += stk.back();
                        stk.pop_back();                    
                    }
                    stk.pop_back(); 
                    stk += temp;
                }
                else stk.push_back(c);
            }
            return stk;
        }
};
int main(){
    Solution a;
    return 0;
}