#include<iostream>
#include<vector>
using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    int big=-1,count=0,reset=9;
    for (int i = 0 ; i < candles.size() ; i++ ){
        if( candles[i] > big ){ 
            count=0;
            big = candles[i] ; 
            count++;
            reset=i;
        }
        if(big==candles[i] && i!=reset) count++;       
    }
    cout<< count ;
}

int main(){
    vector<int> a = {7 ,69 ,2 ,69 ,7};
    birthdayCakeCandles(a);
}