#include <iostream>
#include <stack>
#include <time.h>// there is  a function shuffle in bits/stdc++ library
using namespace std;
stack<int> s,b;
int n,y,a;
bool isFound = false;
void prints(stack<int> s){
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
  }
}
int randbase25(){
        int g = rand();
        g %= 25;
        return g+1;
}
void check(int n){
    b=s;
    while (!b.empty()) {
        int top = b.top();
        b.pop();
        if (top == n) {
            isFound = true;
            // break;
        }
    }
    if (isFound) {
        cout << "The number " << n << " was found in the stack." << endl;
    } 
    else {
        s.push(n);
        cout << "The number " << n << " was added to the stack." << endl;
    }

}
int main(){
    srand(time(0));
    for (int z=0;z<21;z++){
        check(randbase25());
    }
    prints(s);
    cout << endl;
    prints(b);
}