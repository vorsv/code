#ifndef LISTNODE_LIB_H
#define LISTNODE_LIB_H

#include <vector>
#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Convert a vector to a linked list
ListNode* vecToLinkedList(const std::vector<int>& a);

// Overload << operator for printing linked lists
std::ostream& operator<<(std::ostream& os, ListNode* head);

// Utility function to delete a linked list and free memory
void deleteLinkedList(ListNode* head);

#endif // LISTNODE_LIB_H