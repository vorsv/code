#include <climits>
#include<vector>
#include<iostream>

using namespace std;

class Solution {
    public:
        Solution(){
            vector<int> nums;
            cout<< canSortArray(nums)<<endl;
        }
        bool canSortArray(vector<int> nums) {
            int prevbit = 0;
            int premax = INT_MIN;
            int currmax = INT_MIN;
            int currmin = INT_MAX;

            for(const int i: nums){
                const int setbits = __builtin_popcount(i);
                if(setbits != prevbit){
                    if(premax > currmin) return false;
                prevbit = setbits;
                premax = currmax;
                currmax = i;
                currmin = i;
                }
                else{
                    currmax = max(currmax, i);
                    currmin = min(currmin, i);
                }
            }

            return premax <= currmin;;
        }
};
int main(){
    Solution a;
    return 0;
}