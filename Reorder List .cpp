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
    void reorderList(ListNode *head) {
	if (head==NULL) return ;
        unordered_map<int,ListNode *> map;
	   int index=0;
	   ListNode *tail=head;
	   while (tail!=NULL)
		{
			map[++index]=tail;
			tail=tail->next;
}
    if (index==1) return ;
tail=NULL;
for (int i=1;i<=index/2;i++)
{
	if (tail==NULL)
	{
		tail=map[i];
}
else
	{
		tail->next=map[i];
		tail=tail->next;
}
if (index>1)
{
tail->next=map[index-i+1];
tail=tail->next;
}
}
if (index%2==1)
{
tail->next=map[index/2+1];
tail=tail->next;
}
tail->next=NULL;
head=map[1];
    }
};

