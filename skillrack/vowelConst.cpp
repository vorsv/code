#include<iostream>

using namespace std;

bool isVowel(char c){
    c = tolower(c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
    return false;
}
bool isConso(char c){
    return !(isVowel(c));
}

bool countVowels(string str){
    int v = 0,c=0;
    for(int i=0; i<str.length(); i++){
        if(isVowel(str[i])) v++;
        else c++;
    }
    if(v==c) return true;
    return false;
}


int main(){
    string a = "abcdei";
    // cin >> a;
    int i=0,j=0,z = a.length();
    char ans[z];
    if (countVowels(a)) {
        while (i<z && j<z) {
            if(isVowel(a[i])){
                while(!isConso(a[j])) j++;
                ans[j]=a[i];
                ans[i]=a[j];
                j++;
            }
            i++;
        }
    }
    a=ans;
    a.resize(z);
    cout << a;
}