#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            vector<vector<int>> arr = {{11 ,2 ,4},{4 ,5 ,6},{10 ,8 ,-12}} ;
            cout<< diagonalDifference(arr)<<endl;
        }
        int diagonalDifference(vector<vector<int>> arr) {
            int n = arr[0].size(),suma=0 ,sumb=0;
            for(int i = 0; i < n ; i++) suma += arr[i][i], sumb += arr[i][n-i-1];
            return abs(suma-sumb);
        }
        int abs(int g){
            return (g>=0)?g:(-1*g);
        }
};
int main(){
    Solution a;
    return 0;
}