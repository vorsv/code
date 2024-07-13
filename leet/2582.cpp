#include<iostream>
using namespace std;

class Solution {
public:
    Solution(){
        cout << passThePillow2(2, 341) ;
    }
    int passThePillow(int n, int time) {
        return (2*n < time) ? passThePillow(n,time-n-n+2) :( (time < n-1) ? time+1 : n+n-1-time );
}
    int passThePillow2(int n, int time) {
        cout << n << " " << time << "\n";
        if(2*n < time) return passThePillow2(n, time-n-n+2);
        else{
            if(time < n-1) {
                 return 1+time;
            } 
            else{
        cout << n << " " << time << "\n";
                return n+n-1-time ;
            }
        }
    }
};
//  return (2*n < time) ? passThePillow(n,time-n-n+2) :( (time < n-1) ? time+1 : n+n-1-time );
int main(){
    Solution s;
    return 0;
}