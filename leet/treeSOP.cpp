#include<bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode *Tree(vector<int> vals){
        int i=0;
        TreeNode *tree = new TreeNode(vals[i++]);

        while(i<vals.size()){
            TreeNode *temp = new TreeNode(vals[i]);
            
        }

        return tree;
    }
    int child(int a){
        return 2*a-1;
    }
    bool isodd(int l){
        return l%2!=0;
    }
};