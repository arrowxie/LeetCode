class Solution {
public:
    string countAndSay(int n) {
        if(n<0) return "";
		int j=1;
		string ret = "1";
		while(j<n)
		{
			ret = revolution(ret);
			j++;
		}
		return ret;
    }
	string revolution(string ret)
	{
		int length = ret.size();
		char pre = ret[0];
		int count=1;
		string temp;
		for(int i=1;i<length;i++)
		{
			if(ret[i]==pre)
			{
				count++;
			}
			else
			{
				temp += count+'0';
				temp += pre;
				pre = ret[i];
				count = 1;
			}
		}
		temp += count+'0';
		temp += pre;
		return temp;
	}
};
