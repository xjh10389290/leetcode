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
    ListNode *swapPairs(ListNode *head) {
        ListNode *newhead=NULL;
        ListNode *head1=NULL;
        ListNode *head2=head;
        if (head2==NULL) return NULL; 
        ListNode *head3=head->next;
        if (head3==NULL) return head; 
        while (head3!=NULL)
        {

            if (head1==NULL)
            {
                head2->next=head3->next;
                head3->next=head2;
                newhead=head3;
                head1=head2;
                head2=head1->next;
                 if (head2==NULL)
                      return newhead;
                      
                 if (head2->next!=NULL)
                     head3=head2->next;
                  else
                      return newhead;
                continue;
            }
            else
            {
                head2->next=head3->next;
                head3->next=head2;
                head1->next=head3;
                head1=head2;
                head2=head1->next;
                 if (head2==NULL)
                      return newhead;
                      
                 if (head2->next!=NULL)
                     head3=head2->next;
                  else
                      return newhead;
            }
        }
        
        return newhead;
    }
};