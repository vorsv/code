#include<iostream>
#include<string.h>
using namespace std;

class Solution {
public:
    Solution(){
        std::string a="111",b="10";
        std::cout << addBinary(a,b) << std::endl;
    }
    string addBinary(string a, string b) {
        int a1=a.size()-1,b1=b.size()-1,carry=0;
        string z[a1>b1?a1:b1];
        while( a1>=0 || b1>=0 ){
            add( a[a1--], b[b1--], &carry );
        }
    }
    string add (char a, char b, int* carry){

        if( a=='1' && b=='1' ) {
            return (*carry=0)?"10":"11";
            
        }
        if( a=='0' && b=='1' ) return (*carry=0)?"1":"10";
        if( a=='1' && b=='0' ) return (*carry=0)?"1":"10";
        if( a=='0' && b=='0' ) return (*carry=0)?"0":"1";
    }
};

int main() {
    Solution s;
    return 0;
}

/*

try to use sliding window approach

*/