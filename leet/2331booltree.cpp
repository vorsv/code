#include<iostream>

typedef struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
} tree;

class Solution {
public:
    Solution(int a[],int siz){
        tree *root = func(a,0,siz);
        evaluateTree(root);
    }
    bool evaluateTree(tree* root) {

    }
    tree* func(int a[],int n,int siz){
        tree *root = new tree(a[n]);
        
        while( siz < n ){
            root->left = func(a,n+1,siz);
            root->right = func(a,n+1,siz);
        }

        return root;
    }
};

int main(){
    int z[] = { 2 ,1 ,3 ,__null ,__null ,0 ,1 } ;
    int z1 = sizeof(z)/sizeof(z[0]);
    Solution a(z,z1);
    return 0;
}