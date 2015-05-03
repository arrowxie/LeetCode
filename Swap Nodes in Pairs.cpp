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
    ListNode *swapPairs(ListNode *head) {
		if(!head || !head->next)
			return head;
        ListNode *ret = new ListNode(0);
		ListNode *p = head;
		ListNode *q = head->next;
		ListNode *pre = ret;
		while(p&&q)
		{
			pre->next = q;
			p->next = q->next;
			q->next = p;
			pre = p;
			p = p->next?p->next:NULL;
			q = p? p->next:NULL;
		}
		p = ret;
		ret = ret->next;
		delete p;
		return ret;
    }
};
