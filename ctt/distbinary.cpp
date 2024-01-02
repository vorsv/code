#include <iostream>
using namespace std;
class dist{
int km,m;
public:
    dist(int r,int i){
        km=r;
        m=i;
    }
    dist(){
        km=0;
        m=0;
    }
    dist operator+(const dist &o){
        dist p;
        p.km=km+o.km;
        p.m=m+o.m;
        return p;
    }
    friend dist operator-(dist &,dist &);
    void put(){
        cout<<km<<"km "<<m<<"mtrs\n";
    }
};
dist operator-(dist &z,dist &o){
        dist p;
        p.km=z.km-o.km;
        p.m=z.m-o.m;
        return p;
    }
int main (){
    dist a(14,300),b(13,250),c,d;
    int p;
    c=a+b;
    d=a-b;
    cout<<"a=";
    a.put();
    cout<<"b=";
    b.put();
    cout<<"a+b=";
    c.put();
    cout<<"a-b=";
    d.put();
}