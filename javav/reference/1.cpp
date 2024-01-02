#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter number of elements :";
    cin>>n;
    int a[n];
    for ( i = 0; i < n; i++)
    {
       cout<<"a["<<i<<"] :";
       cin>>a[i];
    }
    cout<<"enter the element to search :"<<endl;
    cin>>j;
    for (i = 0; i < n; i++){
        if (a[i]==j)
        {
            cout<<j<<" is in a["<<i<<"]"<<endl;
        }
    }
}
