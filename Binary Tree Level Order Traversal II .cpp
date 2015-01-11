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
    vector<vector<int>> ans;
    vector<vector<int>> levelOrderBottom(TreeNode *root) {
        pushintoans(root,0);
        for (int i=0;i<ans.size()/2;i++)
        {
            vector<int> tmp=ans[i];
            ans[i]=ans[ans.size()-i-1];
            ans[ans.size()-i-1]=tmp;
        }
        return ans;
    }
    
    void pushintoans(TreeNode * root,int rootlevel)
    {
        if (root==NULL) return ;
        while (ans.size()<rootlevel+1)
        {
            vector<int> onelevel;
            ans.push_back(onelevel);
        }
        ans[rootlevel].push_back(root->val);
        pushintoans(root->left,rootlevel+1);
        pushintoans(root->right,rootlevel+1);
    }
};