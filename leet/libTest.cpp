#include "ll.h"
int main() {
    std::vector<int> vec = {1, 2, 3};
    ListNode* head = vecToLinkedList(vec);
    std::cout << head << std::endl;
    deleteLinkedList(head);
    return 0;
}

// define ll.h
// define ll.cpp
//  g++ -c ll.cpp -o ll.o
//  ar rcs ll.a ll.o
// g++ main.cpp -L. -l:ll -o main