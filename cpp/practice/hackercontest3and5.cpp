#include<iostream>
#include<set>
#include<vector>

// void printAndSum(std::set<int> f){
//     unsigned long long int sum = 0;
//     for (auto i : f) {
//         std::cout << i << ' ';
//         sum+=i;
//     }
//     std::cout<< "\n\n"<<sum<<"\n\n";
// }

// int threeandfive(int n){
//     std::set<int> k;
//     for (int i = 0; i <=n ; i+=3) {
//         k.insert(i);
//     }
//     for (int i = 0; i <=n ; i+=3) {
//         k.insert(i);
//     }
//     printAndSum(k);
//     return 0;
// }
void  threeandfive(int a){
    unsigned long long int s=0;
    double p=0;
    p=(a-1)/3;
    s=((3*p*(p+1))/2);

    p=(a-1)/5;
    s+=((5*p*(p+1))/2);

    p=(a-1)/15;
    s-=((15*p*(p+1))/2);

    std::cout<<s<<std::endl;
}

int main(){
    std::vector<int> n ={10,100};
    for(int a0 = 0; a0 < n.size(); a0++){
        threeandfive(n[a0]);
    }
    return 0;
}