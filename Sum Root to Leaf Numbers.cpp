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
    long long allsum;
    int sumNumbers(TreeNode *root) {
        allsum=0;
        getsum(root,0);
        return allsum;
    }
    
    void getsum(TreeNode *root,long long sum)
    {
        if (root==NULL) return ;
        int localsum=sum*10+root->val;
        if (root->left==NULL&&root->right==NULL)
        {
            allsum+=localsum;
            return ;
        }
        getsum(root->left,localsum);
        getsum(root->right,localsum);
        
        
        
    }
};