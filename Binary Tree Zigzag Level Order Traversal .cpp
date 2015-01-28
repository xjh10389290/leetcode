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
vector<vector<int>> allans;
    vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
        insertallans(root,0);
        for (int i=1;i<allans.size();i+=2)
            reverse(allans[i].begin(),allans[i].end());
        return allans;
    }
    
    void insertallans(TreeNode *root,int level)
    {
        if (root==NULL)
            return ;
        if (level+1>allans.size())
        {
            vector<int> tmp;
            tmp.push_back(root->val);
            allans.push_back(tmp);
            insertallans(root->left,level+1);
            insertallans(root->right,level+1);
        }
        else
        {
            allans[level].push_back(root->val);
            insertallans(root->left,level+1);
            insertallans(root->right,level+1);            
        }
    }
};