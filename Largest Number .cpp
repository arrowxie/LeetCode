class Solution {
public:
    string largestNumber(vector<int> &num) {
        vector<string> str;
		string ret = "";
		for(vector<int>::size_type i=0; i!=num.size();++i)
			str.push_back(to_string(num[i]));
		sort(str.begin(),str.end(),larger_compare);
		for(vector<int>::size_type i=0; i!=num.size();++i)
		{
			if(str[i]=="0" && i==0)
			{
				ret += str[i];	
				break;
			}
			else
				ret+=str[i];
		}
		return ret;
    }
private:
	static bool larger_compare(const string s1,const string s2)
	{
		return (s1+s2)>(s2+s1);
	}
};
