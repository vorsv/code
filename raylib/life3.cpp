#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
const int a = 40,b = 40;
int c[a][a],d[a][a];
class life {
    void givearr(int a,int b){
        for(int i=0;i<a+2;i++){
            for(int j=0;j<b+2;j++){
                c[i][j]= randbin();
            }   
        }
    }
    void overwrite(){
        for(int i=0;i<a+2;i++){
            for(int j=0;j<b+2;j++){
                c[i][j]= d[i][j];
            }   
        }
    }
    void outarr(){
        cout <<"\n"<< endl;
        for(int i = 1; i<a; i++){
            for(int j = 1; j<b; j++){
            coutmod(i,j);
            // cout << c[i][j] << " ";
            }
            cout << endl;
        } 
    }
    void coutmod(int i,int j){
        if(c[i][j]==1){
            cout << "# ";
        }
        if(c[i][j]==0){
            cout << "  ";
        }
    }
    int randbin(){
            int g = rand();
            g %= 2;
            return g;
            // return inv(g);
    }
    int inv(int g){
        if(g==1){
            return 0;
        }
        else if(g==0){
            return 1;
        }
        else{
            return 9;
        }
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
    void neighnos(){
        cout << endl;
        for(int i=1;i<a;i++){
            for(int j=1;j<b;j++){
                cout << count(i,j) << " ";
            }
        cout << endl;
        }
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
                else{
                    d[i][j] = c[i][j];
                }
            }   
        }
    }
    void lifee(int y){
            for (int z=0;z<y;z++){
                cout << "\nGen ->"<<z+1;
                outarr();
                // neighnos();
                state_mod();
                overwrite();
            }
    }
    public:
        life(int o){
            givearr(a,b);
            lifee(o);
        }
};
int main(){
    // srand(time(0));
    life aq(1);
    return 0;
}