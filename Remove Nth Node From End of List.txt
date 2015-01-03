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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        int num=n;
        ListNode *head_copy=head;
        ListNode *head_copy_next=head_copy->next;
        ListNode *head_nextn=head_copy->next;
        if (head_copy_next==NULL)
        return NULL;
        while (--n)
        {  
           
            head_nextn=head_nextn->next;
            if (head_nextn==NULL)
            return head->next;
            
        }
       
        while (head_nextn->next!=NULL)
        {
            head_copy=head_copy->next;  head_nextn=head_nextn->next; head_copy_next=head_copy_next->next;
        }
            head_copy->next=head_copy_next->next;
            delete head_copy_next;
        return head;
    }
};