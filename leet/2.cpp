
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr || l2 == nullptr) return nullptr;

        struct ListNode* l3 = new ListNode(l1->val + l2->val);
        struct ListNode *curr = l3;
        while( l1->next != nullptr && l2->next != nullptr ){
            l1=l1->next;
            l2=l2->next;
            add(curr,l1->val + l2->val);
        }
        return l3;
    }
    void add(ListNode *gya,int a){
        struct ListNode *New = new ListNode(a);
        struct ListNode *curr = gya;
        while (curr->next!=nullptr) curr=curr->next;
        curr->next=New;
    }
};