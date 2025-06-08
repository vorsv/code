#include<bits/stdc++.h>
#include "ll.h"

using namespace std;

class Solution {
    public:
        Solution(){
            ListNode* a = vecToLinkedList({0,3,1,0,4,5,2,0});
            cout << mergeNodes(a);
    }
    ListNode* mergeNodes(ListNode* a){
        ListNode* curr = a->next, *root = new ListNode,* head = root;
        int sum = 0;
        while (curr != nullptr){
            if (curr->val!=0) sum += curr->val;
            if (curr->val == 0){
                root->val = sum;
                if(curr->next!=nullptr)root->next = new ListNode;
                root = root->next;
                sum = 0 ;
            }
            curr = curr->next;
            cout << head<<endl<<root<<endl<<endl;
        }
        return head;
    }
};

int main(){
    Solution a;
}