#include<iostream>
using namespace std;

int isVowel(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main(){
    string a = "machine",b="";
    int z = a.length();
    for(int i =0;i<z;i++){
        cout<<a<<" "<<a[i]<<" "<<isVowel(a[i])<<" "<<b<<"\n";
        if(isVowel(a[i])) for( int j = 0;j<i+1;j++) b.push_back(a[i]);
        else continue;
    }
    cout << b;
}