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
    bool isBalanced(TreeNode *root) {
        return BalancedHeight(root)>=0;		
    }
	int BalancedHeight(TreeNode *root)
	{
		if(root==NULL) 
			return 0;
		int l = BalancedHeight(root->left);
		int r = BalancedHeight(root->right);
		if(l<0||r<0||abs(l-r)>1)//左子树或者右子树不平衡或者两个子树高度差>1
			return -1;
		return max(l,r)+1;
	}
};
