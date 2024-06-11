#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    Solution(){
        string a = "i" ;
        cout << finalString(a);
    }
    string finalString(string s) {
        int i=0,j=s.size()-1;
        while(s[i]!='\0'){
            cout << i << " " << j << " " << s[i] << "\n" ;
            // if (i>1){
                cout << s.substr(0,i) << " " << s.substr(i,j-i+1) << (s[i]=='i') << " " <<"\n" ;
                if( s[i]=='i' ){
                    s = revstr(s.substr(0,i)) + s.substr(i+1,j-i);
                    cout <<"in if  "<< s.substr(0,i) << " " << s.substr(i,j-i+1) << (s[i]=='i') << " " <<"\n" ;
                    i--;
                }
            // }
            i++;
        }
        return s;
    }
    string revstr(string s){
        int i=0,j=s.size()-1;
        cout << s << " " << i << " " << j << "\n" ;
        while(i<j){
            s[j] = s[i] ^ s[j];
            s[i] = s[i] ^ s[j];
            s[j] = s[i] ^ s[j];
            cout << s[i] << " " << s[j] << "\n" ;
            i++;
            j--;
        }
        return s;
    }
};


int main(){
    Solution a;
    return 0;
}