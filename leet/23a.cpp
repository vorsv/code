#include<bits/stdc++.h>
#include "ll.h"

using namespace std;

class Solution {
    public:
        Solution(){
            vector<vector<int>> f = {{1,2,3},{4,5,6,7}};
            vector<ListNode*> a;
            for (vector<int> i : f) a.push_back(vecToLinkedList(i));
            cout <<"\n--------------1-------------\n"<< mergeKLists(a);
            f = {{1,4,5},{1,3,4},{2,6}};
            a.clear();
            for (vector<int> i : f) a.push_back(vecToLinkedList(i));
            cout <<"\n--------------2-------------\n"<< mergeKLists(a);
            f = {{1,4,5}};
            a.clear();
            for (vector<int> i : f) a.push_back(vecToLinkedList(i));
            cout <<"\n--------------3-------------\n"<< mergeKLists(a);
            f = {{},{}};
            a.clear();
            for (vector<int> i : f) a.push_back(vecToLinkedList(i));
            cout <<"\n--------------4-------------\n"<< mergeKLists(a);
            f = {};
            a.clear();
            for (vector<int> i : f) a.push_back(vecToLinkedList(i));
            cout <<"\n--------------5-------------\n"<< mergeKLists(a);
            f = {{1},{0}};
            a.clear();
            for (vector<int> i : f) a.push_back(vecToLinkedList(i));
            cout <<"\n--------------6-------------\n"<< mergeKLists(a);
        }
        ListNode* mergeKLists(vector<ListNode*> a){
            ListNode* g = new ListNode(-1),*curr=g;
            int minv=10007,mini=0,n=a.size();
            while (n!=0){
                if(a[0]==nullptr) return nullptr;
                while(7){
                    int null=0;
                    minv=10007,mini=-1;
                    for (int i = 0; i < n; i++){
                        if (a[i] != nullptr ) if(a[i]->val < minv) mini = i,minv = a[i]->val;
                        if(a[i]==nullptr) null++;
                    }
                    if(null == n){
                        if(g==curr && minv != 10007) {
                            cout<<"break one \n";
                            return nullptr;
                        }
                        curr->next = nullptr;
                        break;
                    }
                    if(g==curr && (g->next==nullptr && g->val==-1)){
                        curr->val = a[mini]->val;
                    }else{
                        curr -> next = new ListNode(a[mini]->val);
                        curr = curr->next;
                    }
                    a[mini] = a[mini]->next;
                }
                return g;
            }
        }
};

int main(){
    Solution a;
}