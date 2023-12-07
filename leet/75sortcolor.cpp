#include<iostream>
#include<vector>
using namespace std;

class Solution {
    vector<int> f = {2,0,2,1,1,0};
    public:
        Solution(){
           sortColors(f);
        }
        void sortColors(vector<int>& nums) {
            int n=nums.size(),key=0,i=0,j=0;
            pront(nums); 
            for (i = 1; i < n; i++) {
                key = nums[i];
                j = i - 1;
                while (j >= 0 && nums[j] > key) 
                {
                    nums[j + 1] = nums[j];
                    j = j - 1;
                }
                nums[j + 1] = key;
            }
            pront(nums);    
        }
        void pront(vector<int> bis){
            int n = bis.size();
            cout<<bis[0];
            for(int b=1;b<n;b++){
                cout<<","<<bis[b];
            }
            cout<<"\n";
        }
};

int main(){
    Solution s;
}