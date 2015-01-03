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
TreeNode *lastpre = NULL;
    void flatten(TreeNode *root) {
        if (root==NULL) return ;
        lastpre = root;
        if(root->left==NULL && root->right==NULL)
        return;
        if (root->left==NULL)
        {
               flatten(root->right) ;
               return ;
        }
        TreeNode *righttmp=root->right;
        root->right=root->left;
        root->left=NULL;
        flatten(root->right);
        if (righttmp!=NULL)
        {
         
         root->right->right=righttmp;
         flatten(righttmp);            
        }
    }
};