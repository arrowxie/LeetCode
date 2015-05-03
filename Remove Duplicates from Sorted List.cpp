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
    ListNode *deleteDuplicates(ListNode *head) {
		if(head ==NULL||head->next ==NULL)
			return head;
        ListNode *p, *q,*d;
		p = head;
		q = head->next;
		while(q!=NULL)
		{
			d = q->next;
			if(p->val==q->val)
			{
				p->next = d;
				delete q;
				q = d;
			}
			else
			{

				p = q;
				q = d;
			}
		}
		return head;
    }
};
