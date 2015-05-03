//每个递增序列的最大差值相加
class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int n = prices.size();
		int profit = 0;
		for(int i=1;i<n;i++)
		{
			int delta = prices[i]-prices[i-1];
			if(delta>0)
				profit += delta;
		}
		return profit;
    }
};
