#include<iostream>
#include<vector>
using namespace std;


void miniMaxSum(vector<int> arr) {
    int big=0,small;
    for(int i = 0 ; i < 5 ; i++ ){
        int sum=0,j=0;
        while ( j < 5 ){
            if(j!=i){
                sum += arr[j];
            }
            j++;
        }
        if( i == 0 || sum < small) small=sum;
        if (sum > big){ big=sum;
        }
    }
    cout << small << " " << big;
}
// 7 69 2 221 8974
int main(){
    vector<int> a = {7 ,69 ,2 ,221 ,8974};
    miniMaxSum(a);
}