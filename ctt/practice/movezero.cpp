#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
size_t i=0,j=0;
vector<int> a = {1,0};
    Solution(){
        moveZeroes(a);
        disp();
    }
    void disp(){
        for (size_t l = 0; l < a.size(); l++)
        {
            cout << a[l]<<", ";
        }
        
    }
    void moveZeroes(vector<int>& nums) {
        size_t n = nums.size();
        while ( i<n && j<n ){
            if(nums[i]==0){
                if(nums[j]!=0){
                    nums[i]=nums[j];
                    nums[j]=0;
                    i++;
                    j++;
                }
                else j++;
            }
            else {
                i++;
                j++;
                }
        }
    }
};
int main(){
    Solution a;
}
