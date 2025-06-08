#include<bits/stdc++.h>
#include "ll.h"

using namespace std;

class Solution {
    public:
        Solution(){
            ListNode* a = vecToLinkedList({10,1,13,6,9,5});
            ListNode* b = vecToLinkedList({1000000,1000001,1000002});
            cout << mergeInBetween(a,3,4,b);
    }
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2){
        ListNode* curr = list1,*side = list2;
        int i =0;
        while(side->next!=nullptr)side = side->next;
        while(curr!=nullptr){
            if (i == a-1){
                ListNode* prev = curr;
                curr = curr->next;
                prev->next = list2;
            }
            if(i == b){
                side->next = curr;
            }
            i++;
            curr = curr->next;
        }
        return list1;
    }
};

int main(){
    Solution a;
}