#include <iostream>

void recurse(int z){
    if(z==1){
        return;
    }
    if(z%2==0){
        std::cout << z/2 << " ";
        recurse(z/2);
    } else {
        std::cout << z*3+1 << " ";
        recurse(z*3+1);
    }
}

int main(){
    int z;
    std::cin >> z;
    std::cout << z << " ";
    recurse(z);
}