#include<bits/stdc++.h>
#include "ll.h"

using namespace std;

class Solution {
    public:
        Solution(){
            ListNode* a = vecToLinkedList({1,2,3,4,5});
            cout << reverseList(a);
    }
    ListNode* reverseList(ListNode* a){
        if (a == nullptr || a->next == nullptr) return a;
        ListNode* curr = a,*curr1 = a->next,*temp = curr1;

        curr->next = nullptr;

        while(curr1 != nullptr){
            cout << curr->val << " " << curr1->val << " " << curr << "\n";
            temp = curr1->next;
            curr1->next = curr;
            curr = curr1;
            curr1 = temp;
            if (curr1!=nullptr && temp!= nullptr)cout << curr->val << " " << curr1->val << " " << temp->val << "\n\n";
            
        }
        return curr;
    }
};

int main(){
    Solution a;
}