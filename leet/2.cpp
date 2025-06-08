#include<bits/stdc++.h>
#include "ll.h"

using namespace std;

class Solution {
    public:
        Solution(){
            ListNode* a = vecToLinkedList({1,8});
            ListNode* b = vecToLinkedList({9});
            cout << addTwoNumbers(a,b)<<"\n"<<a;
    }
    ListNode* addTwoNumbers(ListNode* l1,ListNode* l2){
        int carry = 0;
        ListNode* g = new ListNode,*curr = g,*a =l1, *b =l2;
        while (a != nullptr || b != nullptr){
            if(a != nullptr && b != nullptr){
                curr->val =  (a -> val + b -> val + carry)%10;
                carry = (a -> val + b -> val + carry)/10;
            }
            else if ( carry == 0 ){
                if( a == nullptr) curr->val = b->val;
                if( b == nullptr) curr->val = a->val;
            }
            else if ( carry != 0 ){
                if( a != nullptr){
                    curr->val =  (a -> val + carry)%10;
                    carry = (a -> val + carry)/10;
                }
                if( b != nullptr) {
                    curr->val =  (b -> val + carry)%10;
                    carry = (b -> val + carry)/10;
                }                
            }
            if( a != nullptr) a = a->next;
            if( b != nullptr) b = b->next;
            if(curr->next==nullptr && (a != nullptr || b != nullptr)) {
                curr->next = new ListNode;
                curr = curr->next; 
            }
        }
        if (carry != 0) curr->next = new ListNode(carry);
        return g;
    }
};

int main(){
    Solution a;
}