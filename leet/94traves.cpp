#include<iostream>
#include<vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
    std::vector<int> a;
    public:
        
        std::vector<int> inorderTraversal(TreeNode* root) {
            if(root==NULL) return a;
            inorder(root);
            return a;
        }
        void inorder(TreeNode* root){
            if(root->left==nullptr)  inorder(root->left);
            a.push_back(root->val);
            if(root->right!=nullptr)  inorder(root->right);
        }
};