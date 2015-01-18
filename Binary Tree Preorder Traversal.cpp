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
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode *root) {
         Traversal(root);
         return ans;
    }
    
    void Traversal(TreeNode *root)
    {
        if (root==NULL) return ;
        
         ans.push_back(root->val);
    
 
        Traversal(root->left);
        
        Traversal(root->right);
        
       
    }
};