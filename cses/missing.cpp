#include<iostream>
int main(){
    long s,m,n=0;
    std::cin>>s;
    m=((s*(s+1))/2);
    while(s-->1){
        std::cin>>n;
        m-=n;
    }
    std::cout<<m;
}