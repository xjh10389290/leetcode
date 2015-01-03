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
    bool hasCycle(ListNode *head) {
        ListNode *speed1=head;
        ListNode *speed2=head;
        bool stop=false;
        bool hasCycle=false;
        if (speed1==NULL)
        {
            stop=true;
            hasCycle=false;
        }
        while(!stop)
        {
           if (speed2->next!=NULL) 
           {
               speed2=speed2->next;
               if (speed2==speed1)
               {
                   hasCycle=true;
                   stop=true;
                   break;
               }
           }
           else
           {
               hasCycle=false;
               stop=true;
               break;
           }
           if (speed2->next!=NULL) 
           {
               speed2=speed2->next;
               if (speed2==speed1)
               {
                   hasCycle=true;
                   stop=true;
                   break;
               }
           } 
             else
           {
               hasCycle=false;
               stop=true;
               break;
           }
           speed1=speed1->next;
        }
        return hasCycle;
    }
    
};