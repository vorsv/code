#include<iostream>
using namespace std;

class Solution {
    int a = 10;
    public:
        Solution(){
             cout << totalMoney(a);
        }
        int totalMoney(int n) {//excess 7 + un 7 days's sum + 
                int mod=n%7,q=(n/7);
                cout<<q<<" "<<sum(q)<<" "<<sum(mod+q)<<" "<<q*sum(7)<<" "<<sum(q-1)*7<<" "<<sum(mod)<<" \n";
                // cout << (sum(q-(mod==0?0:1))*7)<<"  "<<sum(mod)<<"  "<<sum(7)*q<<"\n";
                cout<<((q*sum(7))+(sum(q-1)*7)+(sum(mod+q)-sum(q)))<<"\n";
                return 0;
        }
        int sum(int g){
            return (g*(g+1))/2;
        }
};
int main(){
    Solution s;
}