#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            string a = "1900-01-01";
            cout << convertDateToBinary(a);
    }
    string convertDateToBinary(string a){
        string b;
        
        return tenToTwo(atoi(a.substr(0,4).c_str())) + '-'
            + tenToTwo(atoi(a.substr(5,2).c_str())) + '-'
            + tenToTwo(atoi(a.substr(8,2).c_str()));
    }

    string tenToTwo(int d) {
        if (d == 0) {
            return "0";
        }
        string b = "";
        while (d > 0) {
            b += (d & 1 ? "1" : "0");
            d >>= 1;
        }
        reverse(b.begin(), b.end());
        return b;
    }
};

int main(){
    Solution a;
}

// use c_str to directly pass a substr to an other function