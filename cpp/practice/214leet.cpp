#include<iostream>
#include<string>
using namespace std;

class Solution {
    string a = "abbab";
    public:
    Solution(){
        string k = shortestPalindrome(a);
        cout << "  :: " << k;
    }
    string shortestPalindrome(string s) {
        if(checkpali(s)) return s;
        else{
            cout << "False";
            cout <<endl<< "till "<<palitill(s);
            s = revandapp(palitill(s));
            }
        return s;
    }
    string revandapp(int f){
        string a1 = custrev(a,f,a.size()-1);
        cout << "\nbail :"<<a1;
        a1 = a1 + a ;
        cout << "\nbail :"<<a1<<endl;
        return a1;
    }
    string custrev(string  a,int f,int k){
        string a1;
        for( int l = k ; l > f-1 ; l-- ){
            a1 = a1 + a[l];
            cout<<"\n:"<<l;
        }
        return a1;
    }
    int palitill(string s){
        int i=s.size()-2,j=2,till=0;
        while(i!=-1){
            if(checkpali(s.substr(i,j))) till = i;
            i--;
            j++;
        }
        return till;
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
