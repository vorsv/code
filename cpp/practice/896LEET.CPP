#include<iostream>
#include<vector>
using namespace std;


class Solution {
vector<int> a = {-1,-1,-1,-1};
public:
    Solution(){
        cout << isMonotonic(a);
    }
    bool isMonotonic(vector<int>& nums) {
        int j=0;
        int a = nums.size();
        if(a==1 || a==2) return true;
        else{
            while(nums[j] == nums[j+1] && j < a-1 ) j++;
            return (j==(a-1)) ? 1 : check(j,a,nums);
        }
    }
    bool check(int i,int a,vector<int>& nums){
        if(nums[i] > nums[i+1]) return dec(nums,a);
        else if(nums[i] < nums[i+1]) return inc(nums,a);
        else return false;
    }
    bool dec(vector<int> b,int a){
        int i=0;
        while(i < a-1){
            if(b[i]>=b[i+1]) i++;
            else return 0;
        }
        return 1;
    }
    bool inc(vector<int> b,int a){
        int i=0;
        while(i < a-1){
            if(b[i]<=b[i+1]) i++;
            else return 0;
        }
        return 1;
    }
};

int main(){
    Solution a;
}