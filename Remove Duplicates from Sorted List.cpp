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
        if (head==NULL) return head;
        ListNode *head1=head;
        ListNode *head2=head->next;
        while (head2!=NULL)
        {
            if (head1->val==head2->val)
            {
                ListNode *head3=head2->next;
                delete head2;
                head1->next=head3;
                head2=head3;
            }
            else
            {
                head1=head2;
                head2=head2->next;
            }
        }
        
        return head;
    }
};