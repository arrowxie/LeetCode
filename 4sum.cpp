class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        int n = num.size();
		vector<vector<int>> ret;
		if(n<4) 
			return ret;
		sort(num.begin(),num.end());
		for(int i = 0;i<n;i++)
		{
			if(i && num[i]==num[i-1])
				continue;
			for(int j =i+1;j<n;j++)
			{
				if(j>i+1&&num[j]==num[j-1])
					continue;
				int k = j+1;
				int t=n-1;
				while(k<t)
				{
					if(k>j+1 && num[k]==num[k-1])
					{
						k++;
						continue;
					}
					if(t<n-1 && num[t]==num[t+1])
					{
						t--;
						continue;
					}
					int sum = num[i]+num[j]+num[k]+num[t];
					if(sum<target)
						k++;
					else if(sum>target)
						t--;
					else
					{
						ret.push_back({num[i],num[j],num[k],num[t]});
						k++;
						t--;
					}
				}
			}
		}
		return ret;
    }
};
