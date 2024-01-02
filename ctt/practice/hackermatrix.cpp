#include<iostream>
#include<vector>
using namespace std;

int sum(vector<vector<int>> s){
    int sum=0;
    for(int i = 0 ;  i < 3 ; i ++ ){
        for(int j = 0 ;  j < 3 ; j ++ ){
            sum += s[i][j];
        }        
    }
    return sum;
}
int formingMagicSquare(vector<vector<int>> s) {
    if(sum(s)!=45) return 45-sum(s);
}
int main(){
    vector<vector<int>> h = {{1,2,3},{3,4,5},{6,7,8}} ;
    cout<<formingMagicSquare(h);
}