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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        if(l1==NULL)
			return l2;
		if(l2==NULL)
			return l1;
		int carry = 0;
		ListNode *ret = new ListNode(0);
		ListNode *t = ret;
		ListNode *p = l1;
		ListNode *q = l2;
		int v1,v2;
		while(p || q)
		{
			v1 = 0;
			if(p != NULL)
			{
				v1 = p->val;
				p = p->next;
			}
			
			v2 = 0;
			if(q !=NULL)
			{
				v2 = q->val;
				q = q->next;
			}
			
			int sum = v1+v2+carry;
			t->next = new ListNode(sum%10);
			carry = sum/10;
			t = t->next;
		}
		if(carry)
		{
			t->next = new ListNode(carry);
			t = t->next;			
		}
		t->next = NULL;
		t = ret;
		ret = ret->next;
		delete t;
		return ret;
    }
};
