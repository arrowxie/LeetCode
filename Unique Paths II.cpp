//时间复杂度 o(m*n) 空间复杂度o(n^2)
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
		const int m = obstacleGrid.size();
		const int n = obstacleGrid[0].size();
        if(obstacleGrid[0][0]|| obstacleGrid[m-1][n-1])
			return 0;
		vector<vector<int>> f(m,vector<int>(n));	
		f[0][0]=1;
		for(int i=1;i<m;i++)
			f[i][0] = obstacleGrid[i][0] ==1 ? 0:f[i-1][0];
		for(int i=1;i<n;i++)
			f[0][i] = obstacleGrid[0][i] ==1 ? 0:f[0][i-1];
		for(int i=1;i<m;i++)
			for(int j=1;j<n;j++)
				f[i][j] = obstacleGrid[i][j]==1 ? 0:f[i-1][j]+f[i][j-1];
		return f[m-1][n-1];
    }
};
//时间复杂度 o(m*n) 空间复杂度o(m)
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
		const int m = obstacleGrid.size();
		const int n = obstacleGrid[0].size();
        if(obstacleGrid[0][0]|| obstacleGrid[m-1][n-1])
			return 0;
		vector<int> f(m);	
		f[0]=obstacleGrid[0][0]==1? 0:1;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				f[j] = obstacleGrid[j][i]==1 ? 0:(j==0? 0:f[j-1])+f[j];
		return f[m-1];
    }
};
