#include<iostream>
#include<vector>

using namespace std;

class Solution {
    public:
        Solution(){
            vector<string> details = {"7868190130M7522","5303914400F9211","9273338290F4010"};
            cout<< countSeniors(details)<<endl;
        }
        int countSeniors(vector<string>& details) {
            int c=0;
            for(auto& v : details){
                if(stoi(v.substr(11,2))>60)
                    c++;
            }
            return c;
        }
};
int main(){
    Solution a;
    return 0;
}
