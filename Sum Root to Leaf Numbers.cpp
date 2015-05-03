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
    int sumNumbers(TreeNode *root) {
		return dfs(root,0);
    }
private:
	int dfs(TreeNode *root, int sum)
	{		
		if(!root)
			return 0;
		sum = 10*sum + root->val;
		if(!root->left && !root->right)
			return sum;
		return dfs(root->left,sum)+dfs(root->right,sum);
	}
};
