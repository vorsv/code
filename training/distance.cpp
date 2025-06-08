#include<bits/stdc++.h>

using namespace std;


int main(){
    int a,f;
    cin >> a;
    vector<int> g;
    for (int i = 0; i < a; i++){
        f=0;
        cin >> f;
        g.push_back(f);
    }
    f=0;
    for (int i = 0; i < a-1; i++)  f+=abs(g[i]-g[i+1]);
    cout << f;
        
}