#include<bits/stdc++.h>
#include <string>

using namespace std;

class Solution {
    public:
        Solution(){
            string str1 = "om";
            string str2 = "nm";
            cout<< canMakeSubsequence(str1 ,str2)<<endl;
        }
        bool canMakeSubsequence(string str1, string str2) {
            int n = str1.length(),n2 = str2.length(),c=0;
            if(n>=n2)for(int i=0 , j=0 ; i<n && j<n2; i++){
                if((str1[i]==str2[j] || (nxtChar(str1[i]))==str2[j]))c++,(i>0)?i--:i,j++;
            }
            return (c==n2)?true:false;
        }
        char nxtChar(char a){
            a=(a%122);
            if(a<96) a+=96;
            return (char)a+1;
        }
};
int main(){
    Solution a;
    return 0;
}
                // while((str1[i]!=str2[j] && nxtChar(str1[i])!=str2[j]) && i<n )i++;
// cout << str2[j] << " "<< str1[i] << " "<< nxtChar(str1[i])<< " "<< i<< " "<< j << " "<< c << " \n";