#include<bits/stdc++.h>
#include <string>

using namespace std;

class Solution {
    public:
        Solution(){
            string s = "01:01:00PM";
            cout<< timeConversion(s)<<endl;
        }
        string timeConversion(string s) {
            int tH = stoi(s.substr(0,2));
            string time;
            if(s[8] == 'A'){
                if(tH==12){
                    s[0]='0',s[1]='0';
                }
            }
            else{
                if(tH>=1 && tH<=11){
                    tH += 12;
                    time = to_string(tH);
                    s[0]=time[0],s[1]=time[1];
                }
            }

            return s.substr(0,8);
        }
};
int main(){
    Solution a;
    return 0;
}