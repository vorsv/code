#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
          vector<vector<int>> a = {
            {1, 1, 1, 0, 0, 0},
            {0, 1, 0, 0, 0, 0},
            {1, 1, 1, 0, 0, 0},
            {0, 0, 2, 4, 4, 0},
            {0, 0, 0, 2, 0, 0},
            {0, 0, 1, 2, 4, 0}
            };
          cout << hourglassSum(a) << endl;
        }
        int hourglassSum(vector<vector<int>> a) {
          int n = a.size() ;

          int max=-99;
          for (int i = 0; i < n-2; i++) {
            for (int j = 0; j < n-2; j++) {
              if (max < a[i][j] + a[i][j + 1] +a[i][j + 2] + a[i + 1][j + 1] + a[i + 2][j] + a[i + 2][j + 1] + a[i + 2][j + 2])
                max = a[i][j] + a[i][j + 1] + a[i][j + 2] + a[i + 1][j + 1] +a[i + 2][j] + a[i + 2][j + 1] + a[i + 2][j + 2];
              cout<<max << " ";
            }
            cout << "\n";
            }
            return max;
        }
};
int main(){
    Solution a;
    return 0;
}