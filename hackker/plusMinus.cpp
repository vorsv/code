#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
      Solution() { 
        vector<int> arr = {-4, 3, -9, 0, 4, 1};
        PlusMinus(arr);
       }
      void PlusMinus(vector<int> arr) {
        float _plus = 0, _minus = 0, _zero = 0, n = arr.size();
        for (int i : arr) {
          if (i < 0) _minus += 1;
          else if (i > 0) _plus += 1;
          else _zero += 1;
        }

        cout  << fixed << setprecision(6) << (_plus/n) << "\n"
             << (_minus/n) << "\n"
             << (_zero/n) << "\n";
      }
      
};
int main(){
    Solution a;
    return 0;
}

