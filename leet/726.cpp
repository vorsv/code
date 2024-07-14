#include<iostream>
#include<string>

using namespace std;


class Solution {
public:
    Solution(){
        string a =  "K4(ON(SO3)2)2";
        cout << countOfAtoms(a);
    }
    string countOfAtoms(string formula) {
        int i=0,j=0,multi;
        string stk = "",curr="",prev="";    
        while(i<formula.length()){
            if(formula[i]== '(') stk.push_back(formula[i]);
            else if (formula[i]== ')'){
                multi = 1; j=i;
                if(i+1 <= formula.length() && isdigit(formula[i+1])) multi=int(formula[i+1]);
                while(formula[j]!= '('){
                    
                }
            }
        }
    }
};