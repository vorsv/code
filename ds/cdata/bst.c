#include<stdio.h>
#include<stdlib.h>

struct tree{
    int dat;
    struct tree *lft,*rit;
};
struct tree *inst(int dat){
    struct tree *New = (struct tree *)malloc(sizeof(struct tree));
    New->dat = dat;
    New->lft = NULL;
    New->rit = NULL;
    return New;
}
struct tree *createRoot(int dat){
    return inst(dat);
}
void inLft(struct tree *root,int dat){
    struct tree *New = inst(dat);
    root->lft=New;
}
void inRit(struct tree *root,int dat){
    struct tree *New = inst(dat);
    root->rit=New;
}
void ins(struct tree *root,int dat){
    if(root->dat < dat && root->rit==NULL) inRit(root,dat);
    else if(root->dat > dat && root->lft==NULL) inLft(root,dat);
    else if(root->dat < dat) ins(root->rit,dat);
    else if(root->dat > dat) ins(root->lft,dat);
}
void in(struct tree *root){
    if(root->lft!=NULL)in(root->lft);
    printf("%d ",root->dat);
    if(root->rit!=NULL)in(root->rit);
}
void delRt(struct tree *node,int dat){
    if(node->rit!=NULL && node->rit->lft==NULL){
        struct tree *temp = node->rit;
        temp->lft = node->lft;
    }
    else delRt(node->rit->lft,dat);
}
struct tree *del(struct tree *root,int dat){
    printf("  %d ",root->dat);
    if(root==NULL) return;
    else if(root->dat == dat)delRt(root,dat) ;
    else if(dat > root->dat) del(root->rit,dat);
    else del(root->lft,dat);
}

int main(){
    struct tree *Bst = createRoot(69);
    ins(Bst,15);
    ins(Bst,12);
    ins(Bst,36);
    ins(Bst,90);
    // ins(Bst,56);
    // ins(Bst,89);

    in(Bst);
    printf("\ndel beg\n");
    Bst = del(Bst,90);
    printf("\ndel com\n");
    in(Bst);
    return 0;
}
