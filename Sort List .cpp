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
    ListNode *merge(ListNode *a,ListNode *b)
    {
        if (a==NULL)
        return b;
        if (b==NULL)
        return a;
        
        ListNode *head=NULL;
        if (a->val<=b->val)
        {
            head=a;
            head->next=merge(a->next,b);
        }
        else
        {
             head=b;
            head->next=merge(a,b->next);           
        }
        
        return head;
    }
    ListNode* gethalf(ListNode *head)
    {
        ListNode *slow=head,*fast=head;
        ListNode *pre=head;
        while (fast!=NULL&&fast->next!=NULL)
        {
            pre=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        return pre;
    }
    ListNode *sortList(ListNode *head) {
        
        if (head==NULL) return NULL;
        if (head->next==NULL) return head;
        ListNode *a;
        ListNode *tmp;
        ListNode *b;
        a=head;
        tmp=gethalf(head);
        b=tmp->next;
        tmp->next=NULL;
        return merge(sortList(a),sortList(b));
    }
};