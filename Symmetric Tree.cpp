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
    bool isSymmetric(TreeNode *root) {
        if (root==NULL)
        return true;
        return areSymmetric(root->left,root->right);
    }
    
    bool areSymmetric(TreeNode *lroot,TreeNode *rroot)
    {
        if (lroot==NULL&&rroot==NULL)
        return true;
        if (lroot!=NULL&&rroot!=NULL&&lroot->val==rroot->val)
        return (areSymmetric(lroot->right,rroot->left)&&areSymmetric(lroot->left,rroot->right));
        return false;
    }
};