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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode *head=NULL;
        ListNode *tail=NULL;
        ListNode *headl1=l1;
        ListNode *headl2=l2;
        
        while (headl1!=NULL||headl2!=NULL)
        {
            ListNode *nextptr=NULL;
            if (headl1==NULL) 
            {
                nextptr=headl2;
                headl2=headl2->next;
            }else if(headl2==NULL)
            {
                nextptr=headl1;
                headl1=headl1->next;                
            } else
            {
                if (headl1->val>=headl2->val)
                {
                    nextptr=headl2;
                    headl2=headl2->next;                   
                }
                else
                {
                     nextptr=headl1;
                     headl1=headl1->next;                     
                }
                
            }
            
            if (head==NULL)
            {
                head=nextptr;
                tail=head;
                
            }
            else
            {
                tail->next=nextptr;
                tail=tail->next;
            }
        }
        return head;
    }
};