#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        Solution(){
            vector<int> a = {10,5,7,7,3,2,10,3,6,9,1,6};
            int k = -4;
            vector<int> b = decrypt(a, k);
            cout << "\n\n";
            for ( int i : b) cout << i << "-\n";
        }
        vector<int> decrypt(vector<int> a, int k) {
            int n = a.size();
            vector<int> b(n, 0);
            if ( k == 0 ) return b;
            for( int i = 0 ; i < n; i++ )for( int j = 1 ; j <= abs(k) ; j++ ) b[i]+=a[((i+j)%n)];
            if(k<0) rotate(b.begin(),b.begin()+n+k-1,b.end());
            return b;
        }
        int abs(int a) { return a>0?a:-a; }
};
int main(){
    Solution a;
    return 0;
}