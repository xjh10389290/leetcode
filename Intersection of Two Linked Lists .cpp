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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if (headA==NULL||headB==NULL) return NULL;
        ListNode *tailA=headA;
        while (tailA->next!=NULL) tailA=tailA->next;
        tailA->next=headA;
        
        ListNode *ptrone=headB;
        ListNode *ptrtwo=headB;
        
        do 
        {
            ptrone=ptrone->next;
            ptrtwo=ptrtwo->next;
            if (ptrtwo==NULL) 
            {
                tailA->next=NULL;
                return NULL;
            }
            ptrtwo=ptrtwo->next;
            if (ptrtwo==ptrone) break;
        }
        while (ptrone!=NULL&&ptrtwo!=NULL);
        
        if (ptrone==NULL||ptrtwo==NULL||ptrone!=ptrtwo)
        {
            tailA->next=NULL;
            return NULL;
        }
        ListNode *PtrB=headB;
        while (PtrB!=ptrone)
        {
            PtrB=PtrB->next;
            ptrone=ptrone->next;
            if (PtrB==NULL||ptrone==NULL) 
            {
                tailA->next=NULL;
                return NULL;
            }
        }
        tailA->next=NULL;
        return PtrB;
        
    }
};