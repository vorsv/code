#include<iostream>
#include<iomanip>
using namespace std;
static int u=0;
    
double sqrt(double a, double b){
    cout <<b<<"\n";
    if (u < 20){
        double b1 = (b + (a/b))/2;
        u++;
        return sqrt(a,b1);
    }
    else{
        return b;
    }
}
double sqrt(double a){
    cout << setprecision(20);
    double b=a/2;
    return sqrt(a,b);
}
void ask(){
    double a;
    cout << "enter nuber to sqrt :";
    cin >> a;
    cout << sqrt (a);
}
int main(){
    ask();
    return 0;
}