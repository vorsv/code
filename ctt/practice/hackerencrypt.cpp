#include<iostream>
#include<string>
#include<cmath>
using namespace std;

string moveSpaces(string nums) {
    int count=0;
    char temp;
    size_t i=0,j=0,n = nums.size();
    while ( i<n && j<n ){
        if(nums[i]==' '){
            count++;
            if(nums[j]!=' '){
                temp=nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
                i++;
                j++;
            }
            else j++;
        }
        else {
            i++;
            j++;
        }
        cout <<nums<<"   "<< count <<endl;
    }
    return nums;
}
string remSpace(string s){
    s=moveSpaces(s);
    int i = s.size();
    while(s[i-1]==' '){
        i--;
    }
    return s.substr(0,i);
}
int incTillEq(int a,int b,int n){
    while(a*b < n && a < b) a++;
    if(a*b < n)cout<<"bruh not vaild error";
    return a;

}
string strToStr(string s,int n){
    int c,f,k=0;
    f=floor(sqrt(s.size()));
    c=ceil(sqrt(s.size()));
    cout<<f<<" "<<c<<" "<<n<<endl;
    f=incTillEq(f,c,n);
    cout<<f<<" "<<c<<" "<<n<<endl;
    string mat[f][c],fin;
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            if((i==f && j==c )&& s[k]==' ') break;
            else if(k>=n) k++;
            else mat[i][j]=s[k++];
            cout<<i<<j<<mat[i][j]<<k<<" "<<n<<endl;
        }
        cout<<endl;
    }
    cout<<"\nexit for-for\n";
    k=0;
    cout<<f<<" "<<c<<" "<<n<<" "<<s<<endl;
    for(int i=0;i<c;i++){
        for(int j=0;j<f;j++){
                cout<<j<<" "<<i<<endl;
                fin+=mat[j][i];
                k++;
                cout<<k<<" "<<n<<mat[j][i]<<" "<<endl;
        }
        if(k>n)break;
        fin+= ' ';    
    }
    return fin;
}
string encryption(string s) {
    s=remSpace(s);
    return strToStr(s,s.size());
}
int main(){
    string s = "chillout",g;
    cout<<encryption(s)<<"*";
}