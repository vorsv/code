#include<iostream>
#include<iomanip>
#include "root.h"
using namespace std;
static int u=0;
    
double sqrte(double a, double b){
    cout <<b<<"\n";
    if (u < 20){
        double b1 = (b + (a/b))/2;
        u++;
        return sqrte(a,b1);
    }
    else{
        return b;
    }
}
double sqrte(double a){
    cout << setprecision(20);
    double b=a/2;
    return sqrte(a,b);
}
void ask(){
    double a;
    cout << "enter nuber to sqrt :";
    cin >> a;
    cout << sqrte (a);
}
int main(){
    ask();
    return 0;
}