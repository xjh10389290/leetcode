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
    ListNode *rotateRight(ListNode *head, int k) {
        if (head==NULL) return NULL;
        if (k==0) return head;
        int count=1;
        ListNode *tail=head;
        while (tail->next!=NULL){ tail=tail->next; count++;}
        if (k%count==0) return head;
        tail->next=head;
        ListNode *newhead=head;
        count=count-k%count;
        while ((--count)>0) newhead=newhead->next;
     
        ListNode* tmp=newhead;
        newhead=newhead->next;
        tmp->next=NULL;
        return newhead;
       
        
    }
};