class Solution {
public:
    int numTrees(int n) {
        if(!n)
			return 0;
		vector<int>num;
		num.push_back(1);
		for(int i=1;i<=n;i++)
		{
			num.push_back(0);
			for(int j=0;j<i;j++)
				num[i]+=num[j]*num[i-j-1];
		}
		return num[n];
    }
};
