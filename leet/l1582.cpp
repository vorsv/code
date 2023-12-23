#include<iostream>
#include<vector>

class Solution {
std::vector<std::vector<int>> a = {{0,0,0,1},{1,0,0,0},{0,1,1,0},{0,0,0,0,}};
int n = a.size(),c=0,sum=0;
public:
    Solution(){
        std::cout << numSpecial(a);
    }
    int numSpecial(std::vector<std::vector<int>>& a) {
        for(int i = 0 ;i<n;i++){
                sum=0;
            for(int j = 0 ;j<n;j++){
                if(i!=j)sum+=(a[i][j]+a[j][i]);
                else sum+=a[i][j];
                std::cout << i << j << sum  << j << i <<  "\n";
            }
            if (sum==1) c++;
        }
        return c;
    }
};

int main(){
    Solution s;
}