/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if (root==NULL) return ;
        deque<TreeLinkNode *> que;
        que.push_back(root);
        while (!que.empty())
        {
            int num=que.size();
            int i;
            for ( i=0;i<num-1;i++)
            {
                que[i]->next=que[i+1];
                if (que[i]->left!=NULL) que.push_back(que[i]->left);
                if (que[i]->right!=NULL) que.push_back(que[i]->right);
            }
                if (que[i]->left!=NULL) que.push_back(que[i]->left);
                if (que[i]->right!=NULL) que.push_back(que[i]->right);
            for (int i=0;i<num;i++)
            que.pop_front();
        }
        
    }
};