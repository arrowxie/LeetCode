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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		if(headA==NULL||headB==NULL)
			return NULL;
		ListNode *p = headA;
		ListNode *q = headB;
		ListNode *ret;
		int a_length=0;
		int b_length=0;
		while(p!=NULL)
		{
			a_length++;
			p = p->next;
		}
		while(q!=NULL)
		{
			b_length++;
			q = q->next;
		}
		p = headA;
		q = headB;
		if(a_length>b_length)
		{
			for(int i=0;i<a_length-b_length;i++)
				p = p->next;
		}
		else
		{
			for(int i=0;i<b_length-a_length;i++)
				q = q->next;
		}
		while(p->val!=q->val)
		{
			p = p->next;
			q = q->next;	
			if(p==NULL)
				return NULL;
		}
		return p;
    }
};
