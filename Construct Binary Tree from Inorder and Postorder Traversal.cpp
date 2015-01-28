class Solution {
public:

    TreeNode *buildTree(vector<int> &ino, vector<int> &pos)
    {
        return build(ino,0,ino.size()-1,pos,0,pos.size()-1);
    }
    
    TreeNode * build(vector<int> &iorder, int isi, int iei, vector<int> &porder, int psi, int pei)
    {

        if (isi>iei||psi>pei||iei-isi!=pei-psi) return NULL;
        int index;
        for (int i=isi;i<=iei;i++)
            if (iorder[i]==porder[pei])
            {
                index=i;
                break;
            }
        TreeNode *root=new TreeNode(iorder[index]);
        root->left=build(iorder,isi,index-1,porder,psi,psi+index-isi-1);
        root->right=build(iorder,index+1,iei,porder,psi+index-isi,pei-1);
        
    }
};