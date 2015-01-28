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
    ListNode * findsmallest(ListNode *head)
    {
        ListNode *next=head;
        
        ListNode *smallptr=head;
        int small=head->val;
        
        ListNode *prev=NULL;
        
        while (next->next!=NULL)
        {
            if (next->next->val<small)
            {
                smallptr=next->next;
                prev=next;
                small=next->next->val;
            }
            next=next->next;
        }
        return prev;
    }
    ListNode *insertionSortList(ListNode *head) {

        
        ListNode *curptr=NULL;
        ListNode *sorthead=NULL;
        while (head!=NULL)
        {
            ListNode *prev=findsmallest(head);
            if (sorthead==NULL)
            {
                if (prev==NULL)
                {
                    sorthead=head;
                    curptr=head;
                    head=head->next;
                }
                else
                {
                    sorthead=prev->next;
                    curptr=sorthead;
                    prev->next=prev->next->next;
                }
                
            }
            else
            {
                 if (prev==NULL)
                {
                    curptr->next=head;
                    curptr=curptr->next;
                    head=head->next;
                }
                else
                {
                    curptr->next=prev->next;
                    prev->next=prev->next->next;
                    curptr=curptr->next;
                }           
            }
        }
        return sorthead;
    }
};