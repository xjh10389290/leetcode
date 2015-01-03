/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode *root) {
        int dep=depth(root);
        if (dep>=0) return true; return false;
    }
    
    int depth(TreeNode *root)
    {
        if (root==NULL) return 0;
        int maxdepth=max(depth(root->left),depth(root->right))+1;
        if (maxdepth<0)
           return -100;
    }
    int max(int a,int b)
    {
        if (abs(a-b)<=1&&a>=0&&b>=0)
        return (a>b)?a:b;
        return -100;
    }
};