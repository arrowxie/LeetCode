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
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        vector<vector<int>> ret;
		vector<int> temp;
		path(root,sum,temp,ret);
		return ret;
    }
private:
	void path(TreeNode *root, int sum,vector<int> &temp, vector<vector<int>> &ret)
	{
		if(!root)
			return;
		temp.push_back(root->val);
		if(!root->left && !root->right && sum==root->val)
			ret.push_back(temp);
		path(root->left,sum-root->val,temp,ret);
		path(root->right,sum-root->val,temp,ret);
		temp.pop_back();
	}
};
