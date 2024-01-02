#include <iostream>
#include <string>
using namespace std;

class base
{
    public:
    int rollno;
    string name;
    int marks;

    virtual void disp()
    {
        cout<<rollno<<endl;
    }
};



class single: public base   //single inheritance
{
    public:
    virtual void disp()
    {
        cout<<name<<endl;
    }  
};

class temp
{
    public:
    int x=0;
};



class multiple : public base, public temp//multiple inheritance
{
    public:
    void show()
    {
        cout<<"after manipulation :"<<endl;
    }    
};



class multilevel : public base  //multilevel inheritance
{
    public:

    virtual void disp()
    {
        cout<<rollno<<endl;
        cout<<name<<endl;
        cout<<marks<<endl;
    }
};





int main()
{

    base b;
    single s;
    multiple m;
    multilevel l;

    s.rollno=22142069;
    m.name="sasuke";
    l.marks=69;

    m.show();

    cout<<"roll no :"<<s.rollno<<endl;
    cout<<"name :"<<m.name<<endl;
    cout<<"marks :"<<l.marks<<endl;
}