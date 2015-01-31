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
    ListNode *partition(ListNode *head, int x) {
		if (head==NULL) return NULL;
        ListNode *tail=head;
	   ListNode *lesshead=NULL;
		ListNode *greaterhead=NULL;
		ListNode *lesstail=NULL;
		ListNode *greatertail=NULL;
		while (tail!=NULL)
{
	if (tail->val<x)//less
{
	if (lesshead==NULL)
{
	lesshead=tail;
	lesstail=lesshead;

}
else
{
	lesstail->next=tail;
	lesstail=lesstail->next;
}
}
else
{
	if (greaterhead==NULL)
{
	greaterhead=tail;
	greatertail=greaterhead;

}
else
{
	greatertail->next=tail;
	greatertail=greatertail->next;
}	
}

tail=tail->next;
}

if (lesshead==NULL)
	return greaterhead;
if (greaterhead==NULL)
	return lesshead;
lesstail->next=greaterhead;
greatertail->next=NULL;
return lesshead;

    }
};


