#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    Solution(){
        string a = "ajkhe" ,b = "juh";
        cout << appendCharacters(a,b);
    }
    int appendCharacters(string s, string t) {
        int i=0,j=0;
        while( s[i]==t[i] && s[i]!='\0' && t[i]!='\0' ){
            cout << s[i] << "  " << t[i] << "  " << i << " in while \n" ;
            i++;
        }
        j =(t.size()-i);
        if( s.size()-i >= t.size()-i ) if( s.substr(s.size()-j,j) == t.substr(t.size()-j,j) ){
            cout << s.substr(s.size()-j,j) <<" "<<t.substr(t.size()-j,j)<< "if truee \n";
            return 0;
        }
        return t.size()-i;
    }
};

int main(){
    Solution a;
    return 0;
}