#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    Solution(){
        vector<int> c = { 1 } ,g = { 0 };
        int m = 1;

        cout << maxSatisfied(c,g,m);
    }
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = SlidingWindow(customers,grumpy,minutes),fin=0;
        for(int i = n ; i < n+minutes ; i++){
            if(grumpy[i]==1) fin += customers[i];
        }
        return fin + SumNoGrumpy(customers,grumpy);
    }
    int SlidingWindow(vector<int>& c, vector<int>& g, int m){
        int i = 0 ,in=0 ,sum = 0 ,n=c.size();
        while ( i<n-m ){
            if ( sum < (c[i]+c[i+1]+c[i+2]) ){
                sum = c[i]+c[i+1]+c[i+2];
                in = i ;
            }
            i++;
        }
        return in+1 ;
    }
    int SumNoGrumpy(vector<int>& customers, vector<int>& grumpy){
        int i = 0 ,sum = 0 ,n=customers.size();
        while( i < n ){
            if(grumpy[i] == 0) sum+=customers[i];
            i++;
        }
        return sum;
    }
};

int main(){
    Solution a;
    return 0;
}