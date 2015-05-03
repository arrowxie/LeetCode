class Solution {
public:
    bool isPalindrome(string s) {
		if(s=="")
			return true;
		string t="";
        int length = s.length();
		for(int i=0;i<length;i++)
		{
			if(s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9'||s[i]>='A'&&s[i]<='Z')
			{
				if(s[i]>='A'&&s[i]<='Z')
					t+=s[i]-'A'+'a';
				else
					t+=s[i];
			}
		}
		if(t=="")
			return true;
		int t_length = t.length();
		int j =0;
		while(j<t_length/2)
		{
			if(t[j]==t[t_length-j-1])
				j++;
			else
				return false;
		}
		return true;
    }
};
