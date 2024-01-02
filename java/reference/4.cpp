#include<iostream>
using namespace std;
class stu{
    int roll,age;
    char n[15];
    public:
        void get(){
            cout<<"Enter your name      :";
            cin>>n;
            cout<<"Enter your no on roll:";
            cin>>roll;
            cout<<"Enter your age       :";
            cin>>age;
        }
        void put(){
            cout<<"\nyour name      :";
            cout<<n;
            cout<<"\nyour no on roll:";
            cout<<roll;
            cout<<"\nyour age       :";
            cout<<age;
        }
};
int main(){
    int n,i;
    cout<<"Enter your no of students:";
    cin>>n;
    stu a[n];
    for ( i = 0; i < n; i++)
    {
        a[i].get();
    }
    for ( i = 0; i < n; i++){
        cout<<"\n\n"<<i+1<<".";
        a[i].put();
    }
    
}