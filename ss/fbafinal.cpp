#include<iostream>
#include<string>
#include<fstream>
using namespace std;

double disc(int af){
    if(af>=10){
        if(af==10){
            return .85*af;
        }
        else{
            return .75*af;
        }
    }
    else return af;
}
class customer{
    private:
    //abstraction
        int q,acNo=1000000023,ifscCode=12345;
        char s,y='y';
        void putBank(){
            cout << "\nyour account no:";
            cout << acNo;
            cout << "\nyour Bank code :";
            cout << ifscCode;
        }
    public:
        string name="vj",address="no 60,dubai cross st";
        int price=376,age =15;
        void cust(){
            putdetails();
            cout << "\nDo you want to see your bank details [y/n] :"<<endl;
            cin >> s;
            if(s==y) putBank();
            cout << "\n-----------------------------------"<<endl;
            cout << "\nEnter the quantity you want to purchase     :"<<endl;
            cin >> q;
            p();
            double qd=disc(q);
            cout << "selected qty     :"<<q;
            cout << "\nTotal price    :"<<q*price;
            cout << "\nFinal price    :"<<qd*price;
            cout << "\n-----------------------------------"<<endl;
        }
        void putdetails(){
            cout << "\nname           :";
            cout << name; 
            cout << "\nage            :";
            cout << age;
            cout << "\naddress        :";
            cout << address;
            cout << "\n-----------------------------------"<<endl;
        }
        void p(){
            ofstream f;
            f.open("data.txt");
            f<<q<<endl;
            f.close();
        }
};
class sales: public customer{
    public:
        int pid=20230044,qq=r();
        void putpid(){
            cout << "order code     :";
            cout <<  pid;
            cout << "\norder's price  :";
            cout <<  price << " rs.";
            double qd=disc(qq);
            cout << "\nToday's sales  :"<<qq;
            cout << "\nAmount         :"<<qq*price;
            cout << "\ndiscount amount:-"<<(qq*price)-(qd*price);
            cout << "\nFinal Profit   :"<<qd*price;
            cout << "\n-----------------------------------"<<endl;
        }
        int r(){
            ifstream file("data.txt");
            string line;
            cout << "Today's Data     :";
            getline(file, line);
            file.close();
            return stoi(line);
        }
        void clear(){
            ofstream f;
            f.open("data.txt");
            f.close();
        }
};
int main(){
    char s,y='y';
    cout << "Are you a customer [y/n] :"<<endl;
    cin >> s;
    cout << "\n-----------------------------------"<<endl;
    if (s==y){
        customer c;
        c.cust();
    }
    else{
        cout << "Are you from sales [y/n] :"<<endl;
        cin >> s;   
        cout << "\n-----------------------------------"<<endl;
        if (s==y){
            sales s;
            s.putdetails();
            s.putpid();
        }
    }
    return 0;
}