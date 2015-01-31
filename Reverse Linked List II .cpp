class Solution {
public:
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        int nn=m;
		
        int k=m-1;
		ListNode *chead=head;
        ListNode *ptr0=head;
        ListNode *ptr1=head;
        ListNode *ptr2=head;
        ListNode *ptr3=head;
        while((--k)>0) ptr0=ptr0->next;
        while((--m)>0) ptr1=ptr1->next;
        while((--n)>0) ptr2=ptr2->next;  
        ptr3=ptr2->next;
        if (ptr1!=NULL&&ptr2!=NULL&&ptr1!=ptr2)reverseKGroup(ptr1,ptr2);
        if (nn!=1)ptr0->next=ptr2;
        ptr1->next=ptr3;
        if (nn==1) return ptr2;
        else return chead;
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