#include<bits/stdc++.h>
#include "ll.h"

using namespace std;

class Solution {
    public:
        Solution(){
            ListNode* a = vecToLinkedList({ 1});
            cout << deleteMiddle(a);
    }
    ListNode* deleteMiddle(ListNode* a){
        ListNode *curr =a,*curr2=a;

        while(curr2->next != nullptr && curr2->next->next != nullptr ){
            cout << curr->val << " " << curr2->val<<"\n";
            // cout << curr->next->val << " " << curr2->next->next->val<<"\n";
            curr = curr -> next;
            curr2 = curr2 -> next -> next;
            cout << curr->val << " " << curr2->val<<"\n\n";
        }
        if(curr2->next != nullptr) return curr->next;
        else return curr;
    }
};

int main(){
    Solution a;
}