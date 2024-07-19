#include<iostream>
int main(){
int i=0,c=1,b=1;
std::string a;
std::cin >> a;
while(a[i+1]!='\0'){
(a[i]==a[i+1])?c++:c=1;
i++;
(c>b)?b=c:b;
}
std::cout<<b;
}