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
struct compare
{
    bool operator()(ListNode * node1,ListNode * node2)
    {
        return node1->val>node2->val;
    }
};
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        
        int size=lists.size();
        if (size==0) return NULL;
        
        ListNode *head=NULL,*tail=NULL;
        priority_queue<ListNode*,vector<ListNode *>,compare > queue;
        
        for (int i=0;i<size;i++)
        {
            if (lists[i]!=NULL)
                queue.push(lists[i]);
        }
        
        while (queue.size()>0)
        {
            ListNode *topnode=queue.top();
            if (head==NULL)
            {
                head=new ListNode(topnode->val);
                tail=head;
                queue.pop();
                if (topnode->next!=NULL)
                    queue.push(topnode->next);
            }
            else
            {
                ListNode *nextnode=new ListNode(topnode->val);
                tail->next=nextnode;
                tail=tail->next;
                queue.pop();
                 if (topnode->next!=NULL)
                    queue.push(topnode->next);               
            }
            
        }
        
        return head;
        
    }
};