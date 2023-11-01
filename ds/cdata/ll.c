#include<stdio.h>
#include<stdlib.h>
int n,i=1,y,w,f,fpos;
struct node{
    int dat;
    struct node *nxt;
};
struct node *create(){
    struct node *head = NULL;
    return head;
}

void inBeg(struct node **head,int data){
    struct node *New = (struct node *)malloc(sizeof(struct node));
    New->dat=data;
    New->nxt=*head;
    *head=New;
}
void inEnd(struct node **head,int data){
    struct node *New = (struct node *)malloc(sizeof(struct node));
    struct node *curr = *head;
    New->dat=data;
    New->nxt=NULL;
    while (curr->nxt!=NULL){
        curr=curr->nxt;
    }
    curr->nxt=New;
    

}
void inMid(struct node **head,int data,int pos){
    struct node *New = (struct node *)malloc(sizeof(struct node));
    struct node *curr = *head;
    New->dat=data;
    while (i<pos-1){
        if (curr == NULL) {
            printf("Invalid position\n");
            return;
        }
        i++;
        curr=curr->nxt;
    }
    i=1;
    New->nxt=curr->nxt;
    curr->nxt=New; 
}

void disp(struct node *head){
    struct node *curr = head;
    printf("-------------------------\n");
    if(head==NULL)printf("list is empty");
    while(curr!=NULL){
        printf("%d ",curr->dat);
        curr = curr->nxt;
    }
    printf("\n-------------------------");
}
void fre(struct node *head){
    struct node *curr = head;
    while(curr->nxt!=NULL){
        struct node *Next = curr->nxt;
        free(curr);
        curr = Next;
    }
    head = NULL;
}

int ask(){
    int k=9;
    printf("\n Menu");
    printf("\n 1.Insert \n 2.Delete \n 3.display\n 6.Exit \n");
    printf("\n Enter your Choice :");
    scanf("%d",&k);
    return k;
}
int askAgain(){
    int k=9;
    printf("1.in Beginning\n2.in End \n3.in Mid\nEnter your Choice :");
    scanf("%d",&k);
    return k;
}

void deBeg(struct node *head){
    printf("\nbeg start");
    struct node *curr = head;
    struct node *next = curr->nxt;
    head = next;
    printf("\nbeg end %d",head->dat);
}
void deEnd(struct node *head){
    struct node *curr = head;
    while (curr->nxt!=NULL){
        curr=curr->nxt;
    }
    curr->nxt = NULL;
    free(curr);
}
void deMid(struct node **head,int pos){
    struct node *curr = head,*prev = head;
    while (i<pos-1 && curr->nxt!=NULL){
        prev = curr ;
        curr=curr->nxt;
    }
    if(i==pos-2){
    prev->nxt=curr->nxt;
    curr->nxt = NULL;
    free(curr);
    }
}
void nig(){
    struct node *list = create();
    while(1){
        y = ask();
        if(y==6)break;
        switch (y)
        {
        case 1:
            w = askAgain();
            printf("enter number to insert :");
            scanf("%d",&f);
            switch (w)
            {
            case 1:
                inBeg(&list,f);
                break;
            case 2:
                inEnd(&list,f);
                break;
            case 3:
                printf("enter postion to insert :");
                scanf("%d",&fpos);
                inMid(&list,f,fpos);
                break;
            
            default:
                break;
            }
            break;
        case 2:
            // del(&list);
            w = askAgain();
            switch (w){
                case 1:
                    deBeg(&list);
                    break;
                case 2:
                    deEnd(&list);
                    break;
                case 3:
                    printf("enter postion to delete :");
                    scanf("%d",&fpos);
                    deMid(&list,fpos);
                    break;
                default:
                    break;
            }
            break;
        case 3:
            disp(list);
            break;
        default:
            break;
        }
    }
}
int main(){
    nig();
   
   
    return 0;
}