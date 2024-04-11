#include<cstdint>
#include<iostream>
#include "bigint.h"

class BigInt{
    std::string digits;
public:

};

void extraLongFactorials(int n) {
    bigint ans=1;
    while (n>1) { 
        ans*=n;
        n--; 
        std::cout<<n<<"  "<<ans<<"\n"; 
    }
    std::cout<<ans;
    
}

int main(){
    extraLongFactorials(35);
    return 0;
}