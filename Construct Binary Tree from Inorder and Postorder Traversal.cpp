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
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        if(inorder.size()==0)
			return NULL;
		return createTree(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1);
    }
private:
	TreeNode *createTree(vector<int> &inorder,int in_begin, int in_end, vector<int>&postorder, int post_begin, int post_end)
	{
		if(in_begin>in_end)
			return NULL;		
		int root_val = postorder[post_end];
		int index;
		for(int i=in_begin;i<=in_end;i++)
			if(inorder[i]==root_val)
			{
				index = i;
				break;
			}
		int left_length = index-in_begin;
		TreeNode *root = new TreeNode(root_val);
		root->left = createTree(inorder,in_begin,index-1,postorder,post_begin,post_begin+left_length-1);
		root->right = createTree(inorder,index+1,in_end,postorder,post_begin+left_length,post_end-1);
		return root;
	}
};
