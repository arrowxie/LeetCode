class Solution {
public:
    string convertToTitle(int n) {
        if(n<1)
			return "";
		string ret = "";
		while(n)
		{
			n--;
			ret = string(1,(n%26+'A'))+ret;
			n = n/26;			
		}
		return ret;
    }
};
	
