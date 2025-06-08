#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            string a = "chopper is not a tanuki";
            int b = 3;
            cout << truncateSentence(a,b);
    }
    string truncateSentence(string a, int b){
        string f;
        int i=0;
        while((a[i] != '\0' ) && b>0 ){
            if (a[i]==' ')b--;
            f.push_back(a[i]);
            cout << a[i] << " " << i << " " << b <<" " << f << "\n";
            i++;
        }
        if ( a[i] != '\0') f.pop_back();
        return f;
    }
};

int main(){
    Solution a;
}