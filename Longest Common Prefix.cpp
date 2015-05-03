class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        int n = strs.size();
		if(n==0)
			return "";
		string prefix = strs[0];
		for(int i=1;i<n;i++)
		{
			int length = prefix.size()>strs[i].size()? strs[i].size():prefix.size();
			int j=0;
			while(j<length&&strs[i][j]==prefix[j])
			{
				j++;
			}
			prefix = prefix.substr(0,j);
		}
		return prefix;
    }
};
