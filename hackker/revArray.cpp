#include <ctime>
#include<iostream>
#include<vector>

using namespace std;

class Solution {
    public:
        Solution(){
            vector<int> a = {5833, 9919, 6731} ;
            vector<int> b=reveseArray(a);
            for(int i : b) cout<<i<<endl;
        }
        vector<int> reveseArray(vector<int> a) {
            long int i=0,j=a.size()-1;
            while(i<j){
                a[i] = a[i] ^ a[j];
                a[j] = a[i] ^ a[j];
                a[i] = a[i] ^ a[j];
                i++;j--;
            }
            return a;
        }
};
int main(){
    Solution a;
    return 0;
}