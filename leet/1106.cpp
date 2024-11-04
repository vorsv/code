#include<iostream>
#include <string>

using namespace std;

class Solution {
    public:
        Solution(){
            string expr = "&(t,t,t)";
            cout<< parseBoolExpr(expr)<<endl;
        }
        bool parseBoolExpr(string expr) {
            string stk;
            for (char c : expr){
                    cout<<stk<<endl;
                if(c=='(') stk.push_back(c);
                else if(c==')'){
                    string temp;
                    while(stk.back() != '('){
                        temp += stk.back();
                        stk.pop_back();
                    }
                    stk.pop_back();
                    char op = stk.back();
                    stk.pop_back();
                    stk.push_back(oper(temp, op));
                }
                else stk.push_back(c);
            }

            return(stk[0]=='t')?true:false;;
        }
        char oper(string expr,char oper) {
            cout<<"in func :" + expr + oper<<endl;
            if(oper == '&') for(char i: expr) if (i=='f') return 'f'; 
            if(oper == '|') for(char i: expr) if (i=='t') return 't';
            if(oper == '!') return (expr[0]=='t')?'f':'t';
            if(oper == '&') return 't';
            if(oper == '|') return 'f';
            return 'f';
        }
};
int main(){
    Solution a;
    return 0;
}