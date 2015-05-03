//最简单的旋转 第0行对应最后一列 第一行对应最后倒数第二列 第i行对应n-i-1列 时间复杂度O(n^2) 空间复杂度 O(n^2)
class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
		if(matrix.empty()||matrix[0].empty())
			return;
        int n = matrix.size();
		vector<vector<int>> temp(n,vector<int>(n));
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				temp[i][j] = matrix[i][j];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				matrix[j][n-i-1]=temp[i][j];
    }
};

//上下翻转一次 主对角线翻转一次 或者 副对角线翻转一次 上下翻转一次 时间复杂度O(n^2) 空间复杂度 O(1)
class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
		if(matrix.empty()||matrix[0].empty())
			return;
		int n = matrix.size();
		for(int i =0;i<n/2;i++)
			for(int j=0;j<n;j++)
				swap(matrix[i][j],matrix[n-i-1][j]);
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
				swap(matrix[i][j],matrix[j][i]);
		
    }
};
