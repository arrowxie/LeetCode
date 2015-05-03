//对每列进行二分查找 找到所在行 然后对所在行进行二分查找
class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        if(matrix.empty()||matrix[0].empty())
			return false;
		int left = 0;
		int right = matrix.size()-1;

		while(left<=right)
		{
			int mid = (right+left)>>1;
			if(matrix[mid][0]<target)
			{
				left = mid+1;
			}
			else if(matrix[mid][0]>target)
			{	
				right = mid-1;
			}
			else
				return true;
		}
		if(right == -1)
			return false;

		int row = right;
		left = 0;
		right = matrix[row].size()-1;
		while(left<=right)
		{
			int mid = (right+left)>>1;
			if(matrix[row][mid]<target)
				left = mid+1;
			else if(matrix[row][mid]>target)
				right = mid-1;
			else
				return true;
		}
		return false;
    }
};


//target 与每行的最右边的数进行比较 若小于target 则往下移动一行比较 若大于 则往左移动进行比较
class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        if(matrix.empty()||matrix[0].empty())
			return false;
		int m = matrix.size();
		int n = matrix[0].size();
		int i=0;
		int j = n-1;
		while(i>=0&&i<m&&j>=0&&j<n)
		{
			if(matrix[i][j]==target)
				return true;
			else if(matrix[i][j]<target)
				i++;
			else 
				j--;
		}
		return false;
    }
};

//将二维数组看成一个大的一维数组 然后进行二分查找
class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        if(matrix.empty()||matrix[0].empty())
			return false;
		int m = matrix.size();
		int n = matrix[0].size();
		int i=0;
		int j = m*n-1;
		int row,col,mid;
		while(j>=i)
		{
			mid = (i+j)>>1;
			row = mid/n;
			col = mid%n;
			if(matrix[row][col]==target)
				return true;
			else if(matrix[row][col]<target)
				i=mid+1;
			else
				j=mid-1;
		}
		return false;
    }
};
