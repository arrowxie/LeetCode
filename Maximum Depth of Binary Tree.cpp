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
    int maxDepth(TreeNode *root) {
        if(root==NULL)
			return 0;
		int l_length = maxDepth(root->left);
		int r_length = maxDepth(root->right);
		if(l_length==0)
			return r_length+1;
		else if(r_length==0)
			return l_length+1;
		else
			return max(l_length,r_length)+1;
    }
};
