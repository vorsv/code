// EVERYTHING IS CORRECT IN THIS PROBLEM.
// Let me help you if you're finding any difficulty in understanding or solving the problem.
// Most of the people are saying that Problem statement and function definition with only one parameter are wrong.
// Just read the problem statement properly and then you'll get to know that Problem statement and function definition with only one parameter are totally correct. THERE IS NO REQUIREMENT OF 2 PARAMETERS.

// Explanation :
// According to the problem statement, we've to remove the value of given node and decrease the number of nodes by one.

// Note: It is given that-

// 1- Given node can't be the last node of the linked list.
// 2- All the values before node should be in the same order.
// All the values after node should be in the same order.
// Steps:
// 1- In order to remove the value of given node, we'll repalce the value of given node with the value of next node.
// 2- connect the given node with next to next node to decrease the number of nodes by one.

// Order of values will be same after performing above steps.

#include<bits/stdc++.h>
#include "ll.h"

using namespace std;

class Solution {
    public:
        Solution(){
            ListNode* a = vecToLinkedList({4,5,1,9}),*curr =a;
            curr = curr->next;
            deleteNode(curr);
            cout << a;
    }
    void deleteNode(ListNode* a){
        while(a->next->next != NULL){
            a=
        }
    }
};

int main(){
    Solution a;
}