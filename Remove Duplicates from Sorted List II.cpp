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
    ListNode *deleteDuplicates(ListNode *head) {
		if (head==NULL) return NULL;
        ListNode *newhead=new ListNode(0);
	  ListNode* newtail=newhead;
        ListNode *tail=head;
	bool replace=false;
	while (tail!=NULL)
{
	if (newhead->next==NULL)
	{
		newhead->next=tail;
		
		tail=tail->next;
		continue;
}
if (newtail->next->val==tail->val)
{
	replace=true;
	tail=tail->next;
	continue;
}
if (replace==true)
{
	replace=false;
	newtail->next=tail;
	tail=tail->next;
	continue;
}

if (replace==false)
{
	newtail=newtail->next;
	newtail->next=tail;
		tail=tail->next;
}
}

if (replace==true)
	newtail->next=NULL;
else
	newtail->next->next=NULL;
return newhead->next;
    }
};


