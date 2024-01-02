#include <iostream>
#include <string.h>
using namespace std;
class gpa{
int a,i;
char f[2];
float gpa1,s[8];
public:
    gpa(){
        for(i=0;i<8;i++){
            getmark(i);
            gpa1+=s[i];
        }
        
    }
    void getmark(int i){
        cout<<"enter the grade of s"<<i+1<<" :";
        cin>>f;
        s[i]=check(f);
    }
    int check(char *i){
        const char u[]={"s,a,b,p"};
        cout<<i<<endl;
        if(strcmp(i,u[0])==1){
            cout<<"res";
        }
    }
};
int main(){
    gpa f;
}