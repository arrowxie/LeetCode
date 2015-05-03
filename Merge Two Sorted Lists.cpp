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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode *t,*ret;
		if(l1==NULL&&l2==NULL)
			return NULL;
		if(l1==NULL)
			return l2;
		if(l2==NULL)
			return l1;
		if(l1->val>l2->val)
		{
			ret = l2;
			l2 = l2->next;
		}
		else
		{
			ret = l1;
			l1 = l1->next;
		}
		t = ret;
		while(l1!=NULL&&l2!=NULL)
		{
			if(l1->val>l2->val)
			{
				t->next = l2;
				t = t->next;
				l2 = l2->next;
			}
			else
			{
				t->next = l1;
				t = t->next;
				l1 = l1->next;
			}
		}
		if(l1==NULL)
			t->next = l2;
		if(l2==NULL)
			t->next = l1;
		return ret;
    }
};
