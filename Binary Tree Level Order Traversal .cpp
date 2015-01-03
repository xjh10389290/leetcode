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
    vector<vector<int> > allans;
    vector<vector<int> > levelOrder(TreeNode *root) {
        getin(root,0);
        return allans;
        
    }
    
    void getin(TreeNode *root,int level)
    {
        if (root==NULL) return ;
        if (allans.size()<level+1)
        {
            vector<int> tmp;
            tmp.push_back(root->val);
            allans.push_back(tmp);
        }
        else
        allans[level].push_back(root->val);
        
        getin(root->left,level+1);
        getin(root->right,level+1);
    }
};