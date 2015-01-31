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
    bool isValidBST(TreeNode *root) {
        if (root==NULL) return true;
        bool ret=true;
        if (root->left!=NULL)
        {
            if ((!isValidBST(root->left))||getmax(root->left)>=root->val) return false;
        }
        
        if (root->right!=NULL)
        {
            if ((!isValidBST(root->right))||getmin(root->right)<=root->val) return false;
        }
        return true;
    }
    int getmin(TreeNode *root)
    {
        int min=root->val;
        if (root->left!=NULL)
            min=std::min(min,getmin(root->left));
        
        if (root->right!=NULL)
            min=std::min(min,getmin(root->right));
            return min;
    }
    int getmax(TreeNode *root)
    {
         int max=root->val;
        if (root->left!=NULL)
            max=std::max(max,getmax(root->left));
        
        if (root->right!=NULL)
            max=std::max(max,getmax(root->right));       
            
            return max;
    }    
};