#include<iostream>
#include<vector>

using namespace std;

class Solution {
    public:
        Solution(){
            vector<int> nums = {8,4,2,30,15} ;
            cout<< canSortArray(nums)<<endl;
        }
        bool canSortArray(vector<int> nums) {
            while (!is_sorted(nums)) {
                int n = nums.size();
                for (int i = 0; i < n - 1; i++) {
                    for (int j = 0; j < n - i - 1; j++) {
                        if (nums[j] > nums[j + 1]) swap(nums[j], nums[j + 1]);
                    }
                }
            }
            return 0;
        }
        void swap(int& a, int& b) {
            if(bin(a) == bin(b)) {
                a=a+b;
                b=a-b;
                a=a-b;
            }

        }
        bool is_sorted(vector<int> a){
            for(int i=0; i<a.size()-1; i++) if(a[i] > a[i+1]) return false;
            return true;
        }
        int bin(int a){
            int z=0;
            while (a>0) z+=a%2, a/=2;
            return z;
        }
};
int main(){
    Solution a;
    return 0;
}