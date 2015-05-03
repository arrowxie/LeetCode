/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	bool check(TreeNode* l, TreeNode* r)
	{
		if(l==NULL && r==NULL)
			return true;
		if(l==NULL || r==NULL)
			return false;
		return l->val==r->val && check(l->left,r->right) && check(l->right,r->left);
	}
    bool isSymmetric(TreeNode *root) {
        if(root == NULL)
			return true;
		return check(root->left,root->right);
    }
};
