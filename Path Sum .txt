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
    bool value=false;
    int suma;
    int getvalue(TreeNode *root,int sum)
    {
        if (root==NULL||value) return 0;
        if ((root->left==NULL)&&(root->right==NULL)&&(root->val+sum==suma))  
   
         value=true;
    
        getvalue(root->left,sum+root->val);
        getvalue(root->right,sum+root->val);       
    }
    bool hasPathSum(TreeNode *root, int sum) {
        suma=sum;
        if (root==NULL) return false;
        getvalue(root,0);
        return value;
    }
    

};