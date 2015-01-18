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
    vector<int> inorderTraversal(TreeNode *root) {
         Traversal(root);
         return ans;
    }
    
    void Traversal(TreeNode *root)
    {
        if (root==NULL) return ;
        Traversal(root->left);
        ans.push_back(root->val);
        Traversal(root->right);
    }
};