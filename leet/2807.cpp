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
            ListNode* a = vecToLinkList({18,6,10,3});
            cout << insertGreatestCommonDivisors(a);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* a){
        ListNode* curr=a;
        while(curr->next != nullptr){
            ListNode* newe = new ListNode(gcd(curr->val,curr->next->val),curr->next);
            newe->next = curr->next;
            curr->next = newe;
            curr = curr->next->next;
        }
        curr=nullptr;
        delete curr;
        return a;
    }
    int gcd(int a ,int b){
        int temp=0;
        while(b!=0){
            temp = a;
            a=b;
            b=temp%a;
        }
        return a;
    }
};

int main(){
    Solution a;
}