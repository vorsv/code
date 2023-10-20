#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

int a = 15,b = 15;
class life {
    public:
        int c[15][15],d[15][15];
        life(){
            givearr(a,b);
            outarr();
            state_mod();
            outarr1();
        }
        void givearr(int a,int b){
            for(int i=0;i<a+2;i++){
                for(int j=0;j<b+2;j++){
                    c[i][j]= randbin();
                }   
            }
        }
        void outarr(){
            for(int i = 1; i<a; i++){
                for(int j = 1; j<b; j++){
                cout << c[i][j] << " ";
                }
                cout << endl;
            } 
        }
        void outarr1(){
            cout <<"\n"<< endl;
            for(int i = 1; i<a; i++){
                for(int j = 1; j<b; j++){
                cout << d[i][j] << " ";
                }
                cout << endl;
            } 
        }
        int randbin(){
               int a = rand();
               a %= 2;
               return a;
        }
        int count(int i,int j){
            int sum=0;
            sum+=c[i-1][j-1];
            sum+=c[i-1][j];
            sum+=c[i-1][j+1];
            sum+=c[i][j-1];
            sum+=c[i][j+1];
            sum+=c[i+1][j-1];
            sum+=c[i+1][j];
            sum+=c[i+1][j+1];
            return sum;
        }
        void state_mod(){
            for(int i=1;i<a;i++){
                for(int j=1;j<b;j++){
                    int neigh = count(i,j);
                    if (c[i][j] == 0 && neigh == 3 ){
                        d[i][j]=1;
                    }
                    else if (c[i][j] == 1 && (neigh<3 || neigh > 2)){
                        d[i][j]=0;
                    }
                }   
            }
        }
};

int main(){
    srand(time(0));
    life aq;
    return 0;
}