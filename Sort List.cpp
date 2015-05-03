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
    ListNode *sortList(ListNode *head) {
        if(head == NULL || head->next == NULL)
			return head;
		return mergesort(head);
    }
private:
	ListNode *mergesort(ListNode *head)
	{
		ListNode *p, *q, *pre, *l, *r;
		if(!head || !head->next)
			return head;
		p = head;
		q = head;
		while(q&&q->next)
		{
			pre = p;
			p = p->next;
			q = q->next->next;
		}
		pre->next = NULL;
		l = mergesort(head);
		r = mergesort(p);
		return merge(l,r);
	}
	ListNode *merge(ListNode *left, ListNode *right)
	{
		ListNode *p = new ListNode(0);
		ListNode *ret = p;
		
		while(left && right)
		{
			if(left->val < right->val)
			{
				p->next = left;
				left = left->next;
			}
			else
			{
				p->next = right;
				right = right->next;
			}
			p = p->next;
		}
		if(!left)
			p->next = right;
		if(!right)
			p->next = left;
		p = ret;
		ret = ret->next;
		delete p;
		return ret;
	}
};
