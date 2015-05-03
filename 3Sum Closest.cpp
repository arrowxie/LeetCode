class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
		if(num.size()==0)
			return 0;
        int min = INT_MAX;
		int temp,gap,result;
		sort(num.begin(),num.end());
		for(auto a=num.begin();a!=prev(num.end(),2);a++)
		{
			auto b = next(a);
			auto c = prev(num.end());
			while(b<c)
			{
				temp = *a+*b+*c;
				gap = abs(temp-target);
				if(gap<min)
				{
					min = gap;
					result = temp;
				}
				if(temp<target)
					b++;
				else
					c--;
			}
		}
		
		return result;
    }
};
