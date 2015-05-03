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
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
		if(preorder.size()==0)
			return NULL;
        return createTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);
    }
	TreeNode *createTree(vector<int> &preorder,int pre_begin,int pre_end, vector<int> &inorder, int in_begin, int in_end)
	{
		if(pre_begin>pre_end)
			return NULL;
		int root_val = preorder[pre_begin];
		int root_pos;
		for(int i=in_begin;i<=in_end;i++)
			if(inorder[i]==root_val)
			{
				root_pos = i;
				break;
			}
		int left_length = root_pos-in_begin;
		int pre_first = pre_begin+1;
		int pre_last = pre_first+left_length-1;
		TreeNode *Node = new TreeNode(root_val);
		Node->left = createTree(preorder,pre_first,pre_last,inorder,in_begin,in_begin+left_length-1);
		Node->right = createTree(preorder,pre_last+1,pre_end,inorder,root_pos+1,in_end);
		return Node;
	}
};
