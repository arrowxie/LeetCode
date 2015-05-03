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
    
    vector<int> preorderTraversal(TreeNode *root) {
		vector<int> ret;
        if(root == NULL)
			return ret;
		preorder(root,ret);
		return ret;
    }
	void preorder(TreeNode* root,vector<int>& ret)
	{
		if(root!=NULL)
		{
			ret.push_back(root->val);
			preorder(root->left,ret);
			preorder(root->right,ret);
		}
	}
};
