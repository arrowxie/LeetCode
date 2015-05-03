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
    ListNode *insertionSortList(ListNode *head) {
        ListNode * ret = new ListNode(INT_MIN);
		if(!head || !head->next)
			return head;
		ListNode *p =ret;
		while(head)
		{
			if(head->val >= p->val)
			{
				p->next = head;
				p = head;
				head = head->next;
			}
			else
			{
				ListNode *pre = ret;
				while(pre != p)
				{
					if(pre->val <= head->val && pre->next->val > head->val)
					{
						p->next = head->next;
						head->next = pre->next;
						pre->next = head;
						head = p->next;
						break;
					}
					else
						pre = pre->next;
				}
			}
		}
		ListNode *t = ret;
		ret = ret->next;
		delete t;
		return ret;
    }
};
