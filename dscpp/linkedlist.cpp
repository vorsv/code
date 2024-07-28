#include <iostream>

typedef struct list{
    int dat;
    list *nxt;
    list() : dat(0), nxt(nullptr) {}
} ll;

ll *init(int dat){
    ll *TEMP = new ll;
    return TEMP;
}
void addbeg(ll *head,int dat){
    ll *temp = init(dat);
    temp->nxt = head;
    head = temp;
}
void addend(ll *head,int dat){
    ll *curr = head,*temp=init(dat);
    while(curr->nxt != nullptr)curr = curr->nxt;
    
}
void addmid(ll *head,int dat,int pos){

}

void add(ll *head){
    int a=0,dat=0;
    std::cout << "insert in\n1.beg\n2.end\n3.mid";
    std::cin>>a;
    switch (a) {
        case 1:
            addbeg(head,dat);
            break;
        case 2:
            addend(head,dat);
            break;
        case 3:
            int pos=0;
            std::cout << "After :";
            std::cin >> pos;
            addmid(head,dat,pos);
            break;
    }
}