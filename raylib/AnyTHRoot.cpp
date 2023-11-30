#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
static int u=0;
int n=0;
    
float atrt(double a, double b ,int n){
    if (u < 1000){
        double b1 = ((n-1)*b + (a/pow(b,n-1)))/n;
        u++;
        return atrt(a,b1,n);
    }
    else{
        return b;
    }
}
float atrt(double a){
    cout << setprecision(12);
    double b=a/2;
    return atrt(a,b,n);
}
void ask(){
    double a;
    cout << "enter number of root :";
    cin >> n;
    cout << "enter number to find "<<n<<" th rt :";
    cin >> a;
    cout << atrt (a);
}
int main(){
    ask();
    return 0;
}