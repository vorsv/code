#include<iostream>
#include<iomanip>
using namespace std;
static int u=0;
    
float cbrt(double a, double b){
    if (u < 40){
        double b1 = (2*b + (a/(b*b)))/3;
        u++;
        return cbrt(a,b1);
    }
    else{
        return b;
    }
}
float cbrt(double a){
    cout << setprecision(12);
    double b=a/2;
    return cbrt(a,b);
}
void ask(){
    double a;
    cout << "enter nuber to cbrt :";
    cin >> a;
    cout << cbrt (a);
}
int main(){
    ask();
    return 0;
}