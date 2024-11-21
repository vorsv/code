#include<iostream>
#include <string>

using namespace std;// in-place   str1.replace(pos, n, str2)        // Replace with string

class Solution {
    public:
        Solution(){
            string s = "aaaaabcdef";
            cout<< compressedString(s)<<endl;
        }
        string compressedString(string s) {
            int z=s.length();
            string ans ="";
            
            for(int i=0, j=0; i<z; i=j){
                int c =0;
                while(i<z && s[i]==s[j] && c<9) c++, j++;
                ans+=to_string(c)+s[i];
            }

            return ans;
        }
};
int main(){
    Solution a;
    return 0;
}