#include<bits/stdc++.h>
#include "ll.h"

using namespace std;

class Solution {
    public:
        Solution(){           
            // vector<vector<int>> f = {{1,4,5},{1,3,4},{2,6}};
            vector<vector<int>> f = {{1,2,3},{4,5,6,7}};
            vector<ListNode*> a;
            for (vector<int> i : f) a.push_back(vecToLinkedList(i));
            cout << mergeKLists(a);
    }
    ListNode* mergeKLists(vector<ListNode*> a){
        ListNode* g = new ListNode,*curr =g;
        int n = a.size(),mine=0,mini=0,null=0;
        cout << n << "\n\n";
        if (n == 1 && a[0]==nullptr) return nullptr;
        if (n == 1 && a[0]!=nullptr) return a[0];
        if (n == 0) return nullptr;
        while((null!=n-1 && null!=n) || mine!=100000){
            null=0;
            mini=0;mine=100000;
            cout << "------------------------\n";
            for(int i = 0; i<n ;i++){
                if (a[i] != nullptr )if(a[i]->val < mine){
                    mini = i;
                    mine = a[i]->val;
                }
                if(a[i]==nullptr) null++;
            }
            cout << "mini "<< mini << " " << mine << " " << null << " " << n << "\n";
            if( a[mini] != nullptr ){
                curr->val = a[mini]->val;
                a[mini] = a[mini]->next;
            }
            for(auto i: a) if(i!=nullptr)cout << i << endl;

            cout << "g :: " <<g<<" n :: " << null<<endl;
            if(curr->next==nullptr && null==n) curr->next = 
            if((curr->next==nullptr && (null !=n-1  && null!=n ))|| mine!=100000) {
                curr->next = new ListNode;
                curr = curr->next; 
            }

        }
        if (g==curr) return nullptr;
        return g;
    }
};

int main(){
    Solution a;
}