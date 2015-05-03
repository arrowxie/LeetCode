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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)
			return NULL;
		ListNode *p = head;
		ListNode *q = NULL;
		while(p && p->val == val)
		{
			head = head->next;
			delete p;
			p = head;
		}
		if(p&&p->next)
			q = p->next;
		while(p && q)
		{
			if(q->val == val)
			{
				p->next = q->next;
				delete q;
				if(p)
					q = p->next;
			}
			else
			{
				p = q;
				q = q->next;
			}
		}
		return head;
    }
};
