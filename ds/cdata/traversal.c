#include<stdio.h>
#include<stdlib.h>

typedef struct tree{
    int dat;
    struct tree *lft,*rit;
} tree;
tree *init(int dat){
    struct tree *New = (struct tree *)malloc(sizeof(struct tree));
    New->dat = dat;
    New->lft = NULL;
    New->rit = NULL;
    return New;
}
struct tree *createRoot(int dat){
    return init(dat);
}
void inLft(struct tree *root,int dat){
    struct tree *New = init(dat);
    root->lft=New;
}
void inRit(struct tree *root,int dat){
    struct tree *New = init(dat);
    root->rit=New;
}
void pre(struct tree *root){//ro,le,rt
    printf("%d ",root->dat);
    if(root->lft!=NULL)pre(root->lft);
    if(root->rit!=NULL)pre(root->rit);
}
void pos(struct tree *root){//le,rt,ro
    if(root->lft!=NULL)pos(root->lft);
    if(root->rit!=NULL)pos(root->rit);
    printf("%d ",root->dat);
}
void in(struct tree *root){//le,rt,ro
    if(root->lft!=NULL)in(root->lft);
    printf("%d ",root->dat);
    if(root->rit!=NULL)in(root->rit);
}
int main(){
    struct tree *tree = createRoot(7);
    inLft(tree,9);
    inRit(tree,10);
    inLft(tree->lft,2);
    inRit(tree->lft,1);
    inLft(tree->lft->lft,12);
    inRit(tree->lft->lft,69);
    inRit(tree->rit,420);
    printf("\n\nInOrder\n-----------------\n");
    in(tree);
    printf("\n\nPreOrder\n-----------------\n");
    pre(tree);
    printf("\n\nPostOrder\n-----------------\n");
    pos(tree);
    printf("\n\n");
}