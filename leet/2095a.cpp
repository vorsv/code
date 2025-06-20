#include<bits/stdc++.h>
#include "ll.h"

using namespace std;

class Solution {
    public:
        Solution(){
            ListNode* a = vecToLinkedList({1});
            cout << deleteMiddle(a);
    }
    ListNode* deleteMiddle(ListNode* a){
        if( a==nullptr || a->next == nullptr ) {
            if(a!=nullptr) delete a; 
            return nullptr;
        }
        if(a->next->next == nullptr) {
            ListNode *r = new ListNode(a->val);
            return r;
        }
        ListNode *minus1 = nullptr;
        ListNode *zeroo0 = a;
        ListNode *pluss1 = a;

        while( pluss1 != nullptr && pluss1->next != nullptr ){
            minus1 = zeroo0;
            zeroo0 = zeroo0->next;
            pluss1 = pluss1 -> next -> next;
        }

        if (minus1!=nullptr){
            minus1->next = zeroo0->next;
            delete zeroo0;

        }

        return a;
    }
};

int main(){
    Solution a;
}