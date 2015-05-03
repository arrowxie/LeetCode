class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
		int length = s.size();
		if(length==0||length==1)
			return false;
		for(int i=0;i<length;i++)
		{
			if(s[i]=='(')
				st.push(')');
			else if(s[i]=='[')
				st.push(']');
			else if(s[i]=='{')
				st.push('}');
			else if(st.empty()||s[i]!=st.top())
				return false;
			else
				st.pop();
		}
		if(st.empty())
			return true;
		else
			return false;
    }
};
