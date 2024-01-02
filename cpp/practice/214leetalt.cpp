#include<iostream>
#include<string>
using namespace std;

class Solution {
    string a = "aa  bcd",j;
    public:
    Solution(){
        string k = shortestPalindrome(a);
        cout << "  :: " << k;
    }
    string shortestPalindrome(string s) {
        if(checkpali(s)) return s;
        else{
            j = brute(s);
            }
        return j;
    }
    string brute(string a){
        string b = a;
        int i=a.size()-1;
        while (!checkpali(b)){
            b = a;
            b = custrev(a,i,a.size()-1) + a;
            i--;
        }
    return b;
    }
    string custrev(string  a,int f,int k){// returns str a1 as from kth index to fth index
        string a1 = "";
        for( int l = k ; l > f-1 ; l-- ){
            a1 = a1 + a[l];
            cout<<"\n:"<<l;
        }
        return a1;
    }
    bool checkpali(string f){
        int i=0,j=f.size()-1;
        while( i < j && f[i] == f[j] ){
            i++;
            j--;
        }
        if( i >= j ) return 1;
        else return 0;
    }
};
int main(){
    Solution a;
}
