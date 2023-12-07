#include<iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    struct ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        struct ListNode f = ListNode(l1->val+l2->val),*cur1=l1,*cur2=l2;
        while( l1->next!=NULL && l2->next!=NULL ){
            insn(&f,l1->val+l2->val);
            cur1 = cur1 -> next ;
            cur2 = cur2 -> next ;
        }
        return *f;        
    }
    void insn(ListNode *rot,int dat){
        ListNode *cur = rot;
        while(cur->next!=NULL){
            cur = cur->next;
        }
        cur->next= new ListNode(dat);
    }
};