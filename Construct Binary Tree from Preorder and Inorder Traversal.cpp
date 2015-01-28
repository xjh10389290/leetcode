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
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) 
    {
        return buildTree(preorder,0,preorder.size()-1, inorder,0,inorder.size()-1);
    }
    
    TreeNode *buildTree(vector<int> &preorder,int psi,int pei, vector<int> &inorder,int isi,int iei)
    {
        if (psi>pei||pei-psi!=iei-isi) return NULL;
        
        int index;
        for (int i=isi;i<=iei;i++)
        if (preorder[psi]==inorder[i])
        {
            index=i;
            break;
        }
        int num=index-isi;
        TreeNode *root=new TreeNode(preorder[psi]);
        root->left=buildTree(preorder,psi+1,psi+num,inorder, isi, index-1);
        root->right=buildTree(preorder,psi+num+1,pei,inorder, index+1, iei);
    }
};