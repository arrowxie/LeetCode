//低位保存数据高位的值
class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int n = digits.size();
		int i = n-1;
		while(i>=0&&digits[i]==9)
			i--; //找到不是连续的9的那位
		if(i<0) //最低位到最高位都是9
		{
			digits.push_back(0);
			digits[0]=1;//最高位置1
			for(int j=1;j<n;j++)
				digits[j]=0;
		}
		else
		{
			digits[i]++;
			for(int j=i+1;j<n;j++)
				digits[j]=0;
		}
		return digits;
    }
};
