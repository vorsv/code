#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            vector<string> sIn = {"pay","attention","practice","attend"};
            string spre = "at";
            cout<< prefixCount(sIn,spre)<<endl;
        }
        int prefixCount(vector<string> sIn, string spre) {
            int c=0;
            for(int itr=0; itr<sIn.size(); itr++){
                int i=0;
                while(sIn[itr][i]!='\0' && spre[i]!='\0') {
                    if(sIn[itr][i]==spre[i]){
                        i++;
                    }
                    else break;
                }
                if(spre[i]=='\0') c++;
            }
            return c;
        }
};
int main(){
    Solution a;
    return 0;
}