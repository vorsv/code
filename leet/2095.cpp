#include<bits/stdc++.h>
#include "ll.h"

using namespace std;

class Solution {
    public:
        Solution(){
            ListNode* a = vecToLinkedList({ 2,1 });
            cout  << deleteMiddle(a)<< " :: ";
        }
        ListNode* deleteMiddle(ListNode* a){
            ListNode *curr =a,*curr2=a;

            while(curr2->next != nullptr && curr2->next->next != nullptr ){
                curr = curr -> next;
                curr2 = curr2 -> next -> next;
                cout << "in while \n";
            }
            if(a==curr && curr->next != nullptr) deleteNode(curr->next);
            else if(a!=curr && curr2->next != nullptr) deleteNode(curr);
            return a;
        }
        void deleteNode(ListNode* a){
            
            if(a->next==nullptr){
                delete a;
                a = nullptr;
                return;
            }
            if (a->next!=nullptr && a->next->next) while(a->next->next != NULL){
                a ->val = a->next->val;
                a=a->next;
            }
            a ->val = a->next->val;
            a->next=nullptr;
        }
};

int main(){
    Solution a;
}