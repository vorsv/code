#include<iostream>

using namespace std;

typedef struct TreeNode {
    int dat;
    TreeNode *lft;
    TreeNode *rit;
    TreeNode() : dat(0), lft(nullptr), rit(nullptr) {}
    TreeNode(int x) : dat(x), lft(nullptr), rit(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : dat(x), lft(left), rit(right) {}
} tree ; 

tree *init(int dat){
    tree *temp = new tree(dat);
    return temp;
}
tree *createRoot(int dat){
    return init(dat);
}
void inLft(tree *root,int dat){
    tree *New = init(dat);
    root->lft=New;
}
void inRit(tree *root,int dat){
    tree *New = init(dat);
    root->rit=New;
}
void pre(tree *root){//ro,le,rt
    printf("%d ",root->dat);
    if(root->lft!=NULL)pre(root->lft);
    if(root->rit!=NULL)pre(root->rit);
}
void pos(tree *root){//le,rt,ro
    if(root->lft!=NULL)pos(root->lft);
    if(root->rit!=NULL)pos(root->rit);
    printf("%d ",root->dat);
}
void in(tree *root){//le,rt,ro
    if(root->lft!=NULL)in(root->lft);
    printf("%d ",root->dat);
    if(root->rit!=NULL)in(root->rit);
}
int main(){
    tree *tree = createRoot(7);
    inLft(tree,8);
    inRit(tree,10);
    inLft(tree->lft,2);
    inRit(tree->lft,1);
    inLft(tree->lft->lft,9);
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