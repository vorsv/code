#include <iostream>
#include <stack>

using namespace std;
stack<int> s;
int n,y,a;
bool isFound = false;
void check(int n){
    while (!s.empty()) {
        int top = s.top();
        s.pop();
        if (top == n) {
            isFound = true;
            break;
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
void get(){
    cout << "enter size of stack :";
    cin >> y;
    cout << "Enter the elements one by one :";
    for (int z=0;z<y;z++){
        cin >> a;
        s.push(a);
    }
}
int main(){
    get();
    cout << "enter nuber to check :";
    cin >> n;
    check(n);
    return 0;
}
