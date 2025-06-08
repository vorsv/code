#include<bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* vecToLinkList( vector<int> a){
    int n = a.size();
    ListNode* curr = new ListNode(a[n-1]);
    if(n>2) for(int i =n-2 ; i>=0; i--){
        ListNode* curr2 = new ListNode(a[i],curr);
        curr = curr2;
    }
    return curr;
}

void printLinkedList(ListNode* head){
    ListNode* root = head;
    while(root->next != nullptr) {
        cout << root->val << ",";
        root= root->next;
    }
}

std::ostream& operator<<(std::ostream& os, ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        os << current->val;
        if (current->next != nullptr) {
            os << ","; // Add a comma if it's not the last element
        }
        current = current->next;
    }
    return os;
}



class Solution {
    public:
        Solution(){
            vector<int> o = {1,2,3,4,5};
            printLinkedList(vecToLinkList(o));
    }
};

int main(){
    Solution a;
}