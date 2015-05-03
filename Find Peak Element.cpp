class Solution {
public:
    int findPeakElement(const vector<int> &num) {
        if(num.size()==0 || num.size()==1)
			return num.size()-1;
		int i=0;
		if(num[i]>num[i+1])
		    return i;
		for(i=1;i<num.size()-1;i++)
		{
			if(num[i]>num[i-1] && num[i]>num[i+1])
				return i;
		}
		if(num[i]>num[i-1])
			return i;
    }
};
