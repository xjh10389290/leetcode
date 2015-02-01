/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    TreeNode *sortedListToBST(ListNode *head) {
		if (head==NULL) return NULL;
		if (head->next==NULL)
		{
			TreeNode *root=new TreeNode(head->val);
			return root;
}
       	ListNode *prev=Findhalf(head);
		TreeNode *root=new TreeNode(prev->next->val);
		root->right=sortedListToBST(prev->next->next);
		prev->next=NULL;
		root->left=sortedListToBST(head);
		return root;
    }

	ListNode * Findhalf(ListNode *head)
	{
		ListNode *prev=head;
		ListNode *slow=head;
		ListNode *fast=head;
		while (fast!=NULL&&fast->next!=NULL)
		{
			prev=slow;
			slow=slow->next;
			fast=fast->next->next;
}
        return prev;
}
};


