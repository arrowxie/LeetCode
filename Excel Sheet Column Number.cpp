class Solution {
public:
    int titleToNumber(string s) {
        int n = s.size();
		int count = 0;
		for(int i =0;i<n;i++)
		{
			count = 26*count+(s[i]-'A'+1);
		}
		return count;
    }
};
