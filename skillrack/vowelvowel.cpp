#include<iostream>
using namespace std;

int isVowel(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main(){
    string a = "ELEPHANT";
    int z = a.length()-1;
    char c= ' ';
    while (z > -1 ){
        if(c==' ' && (!isVowel(a[z]))) a.pop_back();
        else if(c!=' ' && (!isVowel(a[z]))) a[z] = c ;
        else if (isVowel(a[z])) c=a[z];
        z--;
    }
    cout << a << endl;
}