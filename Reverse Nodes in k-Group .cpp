class Solution {
public:
    ListNode *reverseKGroup(ListNode *head, int k) {

		if (head==NULL) return NULL;
		if (k==1) return head;
        ListNode* ptr1=head;
		ListNode* lasthead;
		ListNode *ptr2=ptr1;
		ListNode *newhead=ptr1;
		while (ptr1!=NULL)
		{
			//find ptr2
			int count=2;
			ptr2=ptr1->next;
			while (count<k&&ptr1!=NULL&&ptr2!=NULL)
			{
				count++;
				ptr2=ptr2->next;
			}
			if (count<k||ptr1==NULL||ptr2==NULL)
			{
				//finished
				break;
			}

			ListNode *ptr3=ptr2->next;
			reverseKGroup(ptr1,ptr2);
			//get new head
			if (newhead==head)
			{
				newhead=ptr2;
				lasthead=ptr1;
			}
			else
			{
				lasthead->next=ptr2;
				lasthead=ptr1;
			}
			//merge
			ptr1->next=ptr3;

			//get new ptr1 and ptr2;
			ptr1=ptr3;
		}
		return newhead;
    }
    
	void reverseKGroup(ListNode *head,ListNode *tail)
	{
		ListNode *ptr1=head;
		ListNode *ptr2=ptr1->next;
		ListNode *ptr3=ptr2->next;
		while (ptr2!=NULL&&(ptr1!=tail))
		{
			ptr2->next=ptr1;
			ptr1=ptr2;
			ptr2=ptr3;
			if (ptr2!=NULL) ptr3=ptr2->next;
		}
	}
    
};