class Solution {
public:
    string addBinary(string a, string b) {
        int a_len = a.size();
		int b_len = b.size();
		string ret;
		int carry = 0;
		int i=a_len-1;
		int j=b_len-1;
		while(i>=0&&j>=0)
		{
			int num = a[i]-'0'+(b[j]-'0')+carry;
			carry = num>>1;
			num = num%2;
			ret = (char)(num+'0')+ret;
			i--;
			j--;
		}
		while(i>=0)
		{
			int num = a[i]-'0'+carry;
			carry = num>>1;
			num = num%2;
			ret = (char)(num+'0')+ret;
			i--;
		}
		while(j>=0)
		{
			int num = b[j]-'0'+carry;
			carry = num>>1;
			num = num%2;
			ret = (char)(num+'0')+ret;
			j--;
		}
		if(carry>0)
			ret = (char)(carry+'0')+ret;
		return ret;
    }
};
