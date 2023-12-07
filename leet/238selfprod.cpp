#include<iostream>
#include<vector>
using namespace std;

class Solution {
    vector<int> f = {1,2,3,4};
    public:
        Solution(){
            pront(productExceptSelf(f));
        }
        vector<int> productExceptSelf(vector<int>& nums) {
            int n = nums.size();
            for(int i =0;i<n;i++){
                
            }
        }
        void pront(vector<int> bis){
            int n = bis.size();
            for(int b=0;b<n;b++){
                cout<<bis[b]<<" ";
            }
            cout<<"\n";
        }
};
int main(){
    Solution s;
}