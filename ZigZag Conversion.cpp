class Solution {
public:
    string convert(string s, int nRows) {
        if(nRows<=1 || s.length() == 0)
			return s;
		string ret = "";
		for(int i=0;i<s.length() && i<nRows;i++) //i用来表示行
		{
			int index = i;//index用来表示在S中对应的位置
			ret += s[index];
			for(int k=1; index<s.length();k++)//k用来表示列
			{	
				if(i==0 || i==nRows-1)
					index += 2*nRows-2;
				else
				{
					if(k&0x1) //奇数列
						index += 2*(nRows-i-1);
					else
						index += 2*i;
				}
				if(index<s.length())
					ret += s[index];
			}
		}
		return ret;
    }
};
