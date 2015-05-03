class Solution {
public:
    int maximumGap(vector<int> &num) {
        int n = num.size();
		int max = 0;
		if(n<2)
			return 0;
		sort(num.begin(),num.end());
		for(int i =0;i<n-1;i++)
		{
			if(num[i+1]-num[i]>max)
				max = num[i+1]-num[i];
		}
		return max;
    }
};
