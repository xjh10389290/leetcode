/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        if (head==NULL) return NULL;
        map<RandomListNode *,int> m;
        vector<RandomListNode *> v;
        int index=-1;
        RandomListNode *oldhead=head;
        
        RandomListNode *newhead=new RandomListNode(head->label);
        
        v.push_back(newhead);
        m[oldhead]=++index;
        RandomListNode *root=newhead;
        oldhead=oldhead->next;
        while (oldhead!=NULL)
        {
            
            newhead->next=new RandomListNode(oldhead->label);
            newhead=newhead->next;
            m[oldhead]=++index;
            v.push_back(newhead);
            oldhead=oldhead->next;
            
        }
       oldhead=head;
        
        newhead=root;
        while (oldhead!=NULL)
        {
            if (oldhead->random!=NULL)
            newhead->random=v[m[oldhead->random]];
            else
            newhead->random=NULL;
            newhead=newhead->next;
            oldhead=oldhead->next;
        }
        
        return root;
    }
};