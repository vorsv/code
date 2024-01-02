#include<iostream>
#include<vector>
using namespace std;

class Solution {
vector<int> nums= {3,3},c;
long unsigned int target=6 ,size = nums.size();
    public:
    Solution(){
        c = twoSum(nums , target);
        for(int i = 0; i < c.size() ; i++ ){
            cout<<"  j:"<<c[i]<<endl;
        }
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < size ; i++ ){
            for (int j = i+1; j < size ; j++ ){
                if(nums[i]+nums[j]==target){
                    c = {i,j};
                    return c;
                }
            }
        }
    }
};
int main(){
    Solution a;
}
