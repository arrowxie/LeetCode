class Solution {
public:
    bool isPalindrome(int x) {
		int a=x;
		int r=0;
		if(x<0) return false;
		while(a>0)
		{
			r = r*10+a%10;
			a = a/10;
		}
		return r==x;
	}
};
