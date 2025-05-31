#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            string a = "ab";
            string b = "pqrs";
            cout << mergeAlternately(a,b);
    }
    string mergeAlternately(string a, string b){
        int i,n1=a.size(),n2=b.size();
        string z = "";
        for(i=0 ; i<n1 && i<n2 ;i++){
            z += a[i];
            z += b[i];
        }
        if(n1!=n2) z+=((n1>n2)?(a.substr(i,n1-i)):(b.substr(i,n2-i)));
        return z;
    }
};

int main(){
    Solution a;
}