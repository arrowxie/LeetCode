class Solution {
public:
    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        sort(candidates.begin(),candidates.end());
		vector<vector<int>>result; //保存最终结果
		vector<vector<int>>intermediate;//保存中间变量
		dfs(candidates,target,0,intermediate,result);
		return result;
    }
private:
	void dfs(vector<int>&nums,int gap,int start,vector<int>&intermediate,vector<vector<int>>&result)
	{
		if(gap==0) //找到满足条件的解
		{
			result.push_back(intermediate);
			return;
		}
		for(size_t i=start;i<nums.size();i++)
		{
			if(gap<nums[i]) return; //剪枝
			intermediate.push_back(nums[i]);
			dfs(nums,gap-nums[i],i,intermediate,result);
			intermediate.pop_back();
		}
	}
};
