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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *p,*q,*d;
		d = head;//指向要删除节点
		q = head;
		for(int i=0;i<n-1;i++)
			q = q->next;
		while(q->next!=NULL)
		{
			p=d;//要删除节点的前一个节点
			d=d->next;
			q=q->next;
		}
		if(d==head)
		{
			head = d->next;
		}
		else
			p->next = d->next;
		delete d;
		return head;
    }
};
