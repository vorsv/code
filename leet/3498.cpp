#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            string a = "abc";
            cout << reverseDegree(a);
    }
    int reverseDegree(string a){
        int g =0,n=a.size();
        for(int i=0;i<n;i++) g += (i+1)*(int(a[i])-71-(2*(int(a[i])-97)));
        return g;
    }
};

int main(){
    Solution a;
}