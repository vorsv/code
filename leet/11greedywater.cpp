#include<iostream>
#include<vector>
using namespace std;

class Solution {
vector<int> f = {1,8,6,2,5,4,8,25,7};
    public:
        Solution(){
            cout<<"a\tb\twidth\t\n";
            cout<<maxArea(f);
        }
        int maxArea(vector<int>& height) {
            int a=0 ,n=(height.size()-1);
            int b=n,i=0,ar=0,art=-1;
            while( a != b && i < n ){
                int width = b-a;
                cout<<height[a]<<"\t"<<height[b]<<"\t"<<width<<"\t"<<i++<<" "<<ar<<" "<<art<<"\n";
                if(height[a]>=height[b]){
                    art = width*height[b];
                    b-=1;
                    cout<<"in b\n";
                }
                else{
                    art = width*height[a];
                    a+=1;
                    cout<<"in a\n";
                }     
                if(art>ar) ar=art;
            }
            return ar;
        }
};
int main(){
    Solution s;
}