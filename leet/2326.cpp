#include<bits/stdc++.h>
#include "ll.h"

using namespace std;

class Solution {
    public:
        Solution(){
            ListNode* a = vecToLinkedList({3,0,2,6,8,1,7,9,4,2,5,5,0});
            int m =3;
            int n =5;
            for(vector<int> i : spiralMatrix(m,n,a) ){
                for(int j : i) cout << j <<" ";
                cout << endl;
            }
    }
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* a){
        std::vector<std::vector<int>> z(m, std::vector<int>(n, -1));
        
        
        return z;
    }
};

int main(){
    Solution a;
}