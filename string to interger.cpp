class Solution {
public:
    int atoi(const char *str) {
		long long result=0;
		int temp=0;
		int count=0;
		bool sign = true;
		if(str==NULL)
			return 0;
		while(*str==' ')
			str++;
		while(*str=='+'||*str == '-')
		{
			if(*str == '-')
				sign = false;
			str++;
			count++;
		}
		if(count>1)
			return 0;
		while(*str<='9'&&*str>='0')
		{
			temp = *str-'0';
			result = result*10+temp;
			if(result > INT_MAX) return sign==true? INT_MAX:INT_MIN;
			str++;
		}
		if(!sign)
			result= -1*result;
		return result;
	}
};
