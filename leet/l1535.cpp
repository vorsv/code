#include<iostream>
#include<vector>
using namespace std;

class Solution {
vector<int> arr = {3,2,1};
int n = 10, siz=(arr.size()),i=0;
vector<int> win;
public:
    Solution(){
        inni();
        cout<<"\n\nthe winner is "<<getWinner(arr,n);
        push();
    }
    int getWinner(vector<int>& arr, int k) {
        while(win[i]!=k && i<=siz){
            if(arr[0]>arr[1] && i!=siz){
                win[i]++;
                push();
            }
            else if(i==siz)i=0; 
            else {
                int temp = arr[0];
                arr[0]=arr[1];
                arr[1]=temp;
                win[i+1]++;
                i+=1;
            }
       }
       return arr[i];
    }
    void push(){
        int temp = arr[1],i=0;
        for(i=1;i<siz-1;i++){
            arr[i]=arr[i+1];
        }
        arr[i]=temp;
    }
    void inni(){
        for(int j=0;j<siz;j++) win.push_back(0);
    }
    void out(vector<int> arr){
        cout<<endl;
        for (int i = 0; i < siz; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Solution s;
}