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
    void flatten(TreeNode *root) {
        Relink(root);
    }
private:
	TreeNode* Relink(TreeNode *root)
	{
		if(!root || (!root->left && !root->right))
			return root;
		TreeNode *left = root->left;
		TreeNode *right = root->right;
		root->left = NULL;
		if(left)
		{
			root->right = left;
			root = Relink(left);
		}
		if(right)
		{
			root->right = right;
			root = Relink(right);
		}
		return  root;
	}
};
