#include<iostream>
#include<string>
#include<vector>
using namespace std;

class bruh{
public:    
    string T="12:45:54PM";
    bruh(){
        cout<<timeConversion(T);
    }
    string timeConversion(string s) {
        vector<string> a=splitTime(s);
        if(s[8] == 'P' && a[0] != "12" ) a[0] = plus12(a[0]);
        if(s[8] == 'A' && a[0] == "12" ) a[0] = "00";
        string g = a[0] + ":" +  a[1] + ":" + a[2];
        return g;
    }
    string plus12(string g){
        int t = stoi(g);
        t += 12;
        string f = to_string(t);
        return f;
    }
    vector<string> splitTime(string t){
        vector<string> k;
        int i=0;
        while( i < 9){
            k.push_back(op(t,i));
            i += 3;
        }
        return k;
    }
    string op(string t, int i){
        string k ;
        k = t[i];
        k= k  + t[i+1];
        return k;

    }
};
int main(){
    bruh a;
}