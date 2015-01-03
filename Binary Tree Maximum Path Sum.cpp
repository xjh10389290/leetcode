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
    int ans=0;
    bool f=false;
    int maxPathSum(TreeNode *root) {
        getvalue(root);
        return ans;
    }
    
    int getvalue(TreeNode *root)
    {
        if (root==NULL) return 0;
        int l=getvalue(root->left);
        int r=getvalue(root->right);
        int tmp=0;
        if (l>0) tmp+=l;
        if (r>0) tmp+=r;
        if (!f||tmp+root->val>ans){ans=tmp+root->val;f=1;}
        
        int max=root->val;
        tmp=(l>r)?l:r;
        if (tmp>0) max+=tmp;
        return max;
    }
};