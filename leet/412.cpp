#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        Solution(){
            int a = 10;
            for(string i : fizzBuzz(a) ) cout << i <<endl;
    }
    vector<string> fizzBuzz(int n){
        vector<string> a;
        for(int i=0; i<n ; i++){
            if( (i+1)%3==0 && (i+1)%5 ==0) a.push_back("FizzBuzz");
            if( (i+1)%3==0 && (i+1)%5 !=0) a.push_back("Fizz");
            if( (i+1)%3!=0 && (i+1)%5 ==0) a.push_back("Buzz");
            if( (i+1)%3!=0 && (i+1)%5 !=0) a.push_back(to_string(i+1));
        }
        return a;
    }
};

int main(){
    Solution a;
}