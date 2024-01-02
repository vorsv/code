#include<iostream>
using namespace std;
class Emp{
    int e,r,f; 
    char n[20];
    public:
    Emp(){
        get();
    }
    Emp(int k){

    }
    void get(){
        cout << "Enter your name: " ;
        cin >> n;
        cout << "Enter Your Employee Number: ";
        cin >> e;
        cout << "Enter Your Date Of Birth: ";
        cin >> r;
        cout << "--------------------------------\n" ;
    }
    void put(){
        cout<<n<<"\t"<<e<<"\t"<<r<<"\t\n";
    }
    void talk(){
        cout<<"name      Emp.no    DOB"<<endl;
    }
    void apply(){
    int n,i;
    cout<<"enter no of employees :";
    cin>>n;
    Emp z[n];
    z[0].talk();
    for ( i = 0; i < n; i++)
    {
        z[i].put();
    }
}
};
int main(){
    Emp a(7);
    a.apply();
}