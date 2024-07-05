#include<iostream>

int main(){
    for(int i=1000; i<1100; i++)if(i%3==2 && i%5==4 && i%7==5) std::cout << i << " \n";
}