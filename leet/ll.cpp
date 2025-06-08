#include "ll.h"

ListNode* vecToLinkedList(const std::vector<int>& a) {
    if (a.empty()) return nullptr;
    
    int n = a.size();
    ListNode* curr = new ListNode(a[n-1]);
    if(n>1) {
        for(int i = n-2; i >= 0; i--) {
            ListNode* curr2 = new ListNode(a[i], curr);
            curr = curr2;
        }
    }
    return curr;
}

std::ostream& operator<<(std::ostream& os, ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        os << current->val;
        if (current->next != nullptr) {
            os << ",";
        }
        current = current->next;
    }
    return os;
}

void deleteLinkedList(ListNode* head) {
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}