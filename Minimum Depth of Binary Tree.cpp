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
    int minDepth(TreeNode *root) {
        if(root==NULL)
			return 0;
		if(root->left==NULL&&root->right==NULL)//叶子节点
			return 1;
		int leftlength = minDepth(root->left);
		int rightlength = minDepth(root->right);
		if(leftlength==0||rightlength==0) //只有左孩子或者右孩子
			return max(leftlength,rightlength)+1;
		return 1+min(leftlength,rightlength); //有左右孩子
		
    }
};
