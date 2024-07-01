#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    Solution(){
        vector<int> nums = { 1,2,34,3,4,5,7,23,12 };  
        cout << threeConsecutiveOdds(nums);
    }
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0,i=0,n=arr.size();
        while(count<3 && i<n){
            if(arr[i]%2==1)count++;
            else count=0;
            i++;
        }
        return count==3;
    }
};

int main(){
    Solution s;
}