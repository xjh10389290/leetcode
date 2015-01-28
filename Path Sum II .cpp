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
    vector<vector<int>> pathSum(TreeNode *root, int sum) {
        if (root==NULL) return allans;
        vector<int> tmp;
        tmp.push_back(root->val);
        trysearch(tmp,root,root->val,sum);
        return allans;
        
    }
    
    void trysearch(vector<int> &valarray,TreeNode *root,int cursum,int sum)
    {
        if (root->left==NULL&&root->right==NULL)
        {
            if (cursum==sum)
            {
                vector<int> tmp(valarray);
                allans.push_back(tmp);
            }
            return ;
        }

        
        if (root->left!=NULL)
        {
            valarray.push_back(root->left->val);
            trysearch(valarray,root->left,cursum+root->left->val,sum);
            
            valarray.pop_back();
        }
        
        if (root->right!=NULL)
        {
            valarray.push_back(root->right->val);
            trysearch(valarray,root->right,cursum+root->right->val,sum);
            
            valarray.pop_back();
        }
    }
};