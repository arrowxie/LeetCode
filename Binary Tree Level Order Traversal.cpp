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
    vector<vector<int> > levelOrder(TreeNode *root) {
		vector<vector<int> >  ret;
		vector<int> part;
		queue<TreeNode *> q;
		TreeNode *temp;
        if(root==NULL)
			return ret;
		q.push(root);
		int this_level = 1;
		int next_level = 0;
		while(!q.empty())
		{
			temp = q.front();
			part.push_back(temp->val);
			if(temp->left)
			{
				q.push(temp->left);
				next_level++;
			}
			if(temp->right)
			{
				q.push(temp->right);
				next_level++;
			}
			q.pop();
			this_level--;
			if(this_level==0)
			{
				ret.push_back(part);
				this_level = next_level;
				next_level = 0;
				part.clear();
			}
		}
		return ret;
    }
};
