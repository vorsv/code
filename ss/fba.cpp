#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class customer{
    private:
        int acNo=1000000023,ifscCode=12345;
        char s,y='y';
        void putBank(){
            cout << "\nyour account no   :";
            cout << acNo;
            cout << "\nyour Bank code    :";
            cout << ifscCode;
        }
    public:
        string name="vj",address="no 60,dubai cross st";
        int age =15;
        void cust(){
            putdetails();
            cout << "\nDo you want to see your bank details [y/n] :"<<endl;
            cin >> s;
            if(s==y) putBank();
        }
        void putdetails(){
            cout << "\nname          :";
            cout << name; 
            cout << "\nage           :";
            cout << age;
            cout << "\naddress       :";
            cout << address;
        }
};
class sales: public customer{
    public:
        int pid=20230044,price=245;
        void putpid(){
            cout << "\norder code    :";
            cout <<  pid;
            cout << "\norder's price :";
            cout <<  price << "rs.";
        }
};
int main(){
    char s,y='y';
    cout << "Are you a customer [y/n] :"<<endl;
    cin >> s;
    if (s==y){
        customer c;
        c.cust();
    }
    else{
        cout << "Are you from sales [y/n] :"<<endl;
        cin >> s;   
        if (s==y){
            sales s;
            s.putdetails();
            s.putpid();
        }
    }
    return 0;
}