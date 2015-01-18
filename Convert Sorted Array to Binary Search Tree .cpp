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
vector<int> num_copy;
    TreeNode *sortedArrayToBST(const vector<int> &num) {
        num_copy=num;
        return buildtree(0,num.size()-1);
    }
    
    TreeNode * buildtree(int f,int l)
    {
        if (f>l) return NULL;
        int mid=(f+l)/2;
        TreeNode *root=new TreeNode(num_copy[mid]);
        root->left=buildtree(f,mid-1);
        root->right=buildtree(mid+1,l);
        return root;
    }
    
};