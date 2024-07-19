#include<iostream>
#include <ostream>
int main(){
    unsigned long long int  b,r=1;
    std::cin>>b;
    while(b-->0){
        r=(r>100000007)?((r*2)%100000007):r*2;
    std::cout<<r<<std::endl;
    }
    std::cout<<r;
}

// Print the result modulo 10^9+7.