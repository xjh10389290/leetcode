/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode  *ans=NULL;
        ListNode * root=ans;
        ListNode * root2=ans;
        int add=0;
        while(l1!=NULL||l2!=NULL||add==1)
        {
            ans=new ListNode(add);
			if (root==NULL)
			{
				root=ans;
				root2=root;
			}
			else
			{
				root2->next=ans;
				root2=root2->next;
			}
            add=0;
            if (l1!=NULL)
            {
                ans->val+=l1->val;
                l1=l1->next;
            }
            
            if (l2!=NULL)
            {
                ans->val+=l2->val;
                l2=l2->next;
            }
            
            if (ans->val>9)
            {
                ans->val=ans->val%10;
                add=1;
            }
            
            
            
        }
        
        return root;
    }
};