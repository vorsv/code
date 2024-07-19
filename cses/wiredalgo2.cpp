#include <iostream>
int main(){
    long z;
    std::cin >> z;
    while(z>1){
        std::cout << z << " ";
        (z%2==0)?z/=2:z=z*3+1;
    }
    std::cout << 1;
}