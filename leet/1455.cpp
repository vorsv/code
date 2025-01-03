#include<bits/stdc++.h>
#include<string>

using namespace std;

class Solution {
    public:
        Solution(){
            string sentece = "love errichto jonathan dumb";
            string searchword = "dumb";
            cout<< isPrefixOfWord(sentece ,searchword)<<endl;
        }
        int isPrefixOfWord(string sentece, string searchword) {
            int wc=0,n=sentece.length(),n2=searchword.length(),j=0;
            sentece = ' ' + sentece;
            for(int i=0; i<n; i++){
                if(sentece[i]==' ') wc++;
                if(sentece[i]==searchword[0] && sentece[i-1]==' ') {
                    for(j=0; j<n2 && (i+j)<=n ; j++){                
                        cout << sentece[i+j] << " "<< i << " "<< j << " "<< n << " "<< n2 << " "<< wc << endl;
                        if(sentece[i+j]!=searchword[j]) break;
                    }
                    if(j==n2) return wc;
                    else i=i+j-1;
                }
            }
            return -1;
        }
};
int main(){
    Solution a;
    return 0;
}   