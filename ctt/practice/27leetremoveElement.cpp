#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
size_t i=0,j=0;
vector<int> a = {2,5,6,7,8,8,4};
int val = 8;
    Solution(){
        int k =removeElement(a,val);
        disp(k);
    }
    void disp(int k ){
        for (size_t l = 0; l < a.size(); l++)
        {
            cout << a[l]<<", ";
        }
        cout<<endl<<" k = "<<k;
        
    }
    int removeElement(vector<int>& nums, int val){
        size_t n = nums.size();
        while ( i<n && j<n ){
            if(nums[i]==val){
                if(nums[j]!=val){
                    nums[i]=nums[j]^nums[i];
                    nums[j]=nums[j]^nums[i];
                    nums[i]=nums[j]^nums[i];
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
        return i;
    }
};
int main(){
    Solution a;
}
