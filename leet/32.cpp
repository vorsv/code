#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    Solution(){
        string a = ")()" ;
        cout << longestValidParentheses(a);
    }
    int longestValidParentheses(string s) {
        int i=0,j=s.size()-1;
        if( j<=0 ) return 0;
        while ( ( s[i]!='(' || s[j]!=')' ) && i<j ){
            cout << i << " " << j << " " << (i<j) << "\n";
            if(s[i]!='(') i++;
            if(s[j]!=')') j--;
        }
            cout << i << " " << j << " " << (i<j) << "\n";
        return (j-i>=0)?(j-i):0;
    }
};

int main(){
    Solution a;
    return 0;
}