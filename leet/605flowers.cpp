#include<iostream>
#include<vector>
using namespace std;

class Solution {
    vector<int> f = {1,0,0,0,1,0,0};
    int n=2,c=0;
    public:
        Solution(){
           cout << canPlaceFlowers(f,n)<<"\t"<<c;
        }
        bool canPlaceFlowers(vector<int>& a, int n) {
            int siz=a.size(),i=0;
            if(siz>2){
                while(i<siz){
                    cout<<i<<"  "<<siz<<"\n";
                    if(i==1){
                        i+=2;
                        continue;
                    }
                    if(i==0){
                        if(a[i]==0 && a[i+1]==0){
                            c++;
                            i++;
                            cout<<i<<"in while if"<<c<<"\n";
                        }
                    }
                    else if(i==siz-1){
                        if(a[i]==0 && a[i-1]==0){
                            c++;
                            i++;
                            cout<<i<<"in while else if"<<c<<"\n";
                        }
                    }
                    else{
                        if(a[i]==0 && a[i-1]==0 && a[i+1]==0){
                            c++;
                            i++;
                            cout<<i<<"in while else"<<c<<"\n";
                        }
                    }
                    i++;
                    
                }
            }
            else if(siz==1 && a[0]==0 && n==1) return true;
            else if(siz==2 && (a[0]==0 && a[1]==0)&& n==1)return true; 
            if (n<=c) return true;
            else return false;
        }
};
int main(){
    Solution s;
}