#include<bits/stdc++.h>
#include <string>

using namespace std;

class Solution {
    public:
        Solution(){
            int s = 3;
            string str = "cczazcc";
            cout<< repeatLimitedString(s ,str)<<endl;
        }
        string repeatLimitedString(int s, string str) {
            int i=0;
            str=sort(str);
            while((i+s)<str.size()){
                cout << "char :" << str[i] << " :: " << str[i+s] << " :: " << str <<endl;
                if(str[i]==str[i+s]) {
                    cout << " " << str[i+s] << endl;
                    str.erase(i+s);
                }
                i++;
            }
            return str;
        }
        string sort(string str){
            int min=0,n=str.size();
            for(int i=0;i<n;i++){
                for(int j=0;j<n-i;j++){
                    if(str[j]<str[j+1]){
                        min=str[j];
                        str[j]=str[j+1];
                        str[j+1]=min;
                    }
                }
            }
            return str;
        }
};
int main(){
    Solution a;
    return 0;
}