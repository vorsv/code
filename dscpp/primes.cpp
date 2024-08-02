#include<iostream>
#include<cmath>

class Prime{
    bool isPrime(unsigned long long int z){
        if(z<=1) return false;
        for(unsigned long long int i=2; i<sqrt(z);i++) if(z%i==0) return false;
        return true;
    }
    public:
        Prime(unsigned long long int a){
            unsigned long long int g=0;
            std::cout<<0<<"\t:"<< 2 << "\n" ;
            for(unsigned long long int i=1;i<=9223372036854775807;i+=2){
                if(a==0) break;
                if(isPrime(i)){
                    std::cout<<g+1<<"\t:"<< i << "\n" ;
                    a--;g++;
                };
            }
        }
};

int main(int argc, char* argv[]){
    if(argc==2) Prime a(atoi(argv[1]));
    else std::cout << "Args error nigga";
}