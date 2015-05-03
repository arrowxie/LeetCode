class Solution {
public:
    int maxArea(vector<int> &height) {
		int length = height.size();
		if(length==0)
			return 0;
        int begin=0;
		int end = length-1;
		int max_container=0;
		int temp_container;
		int x,y;
		while(begin<end)
		{
			x = end-begin;
			if(height[begin]<height[end])
			{
				y = height[begin];
				begin++;
			}
			else
			{
				y = height[end];
				end--;
			}
			
			temp_container = x*y;
			if(temp_container>max_container)
				max_container = temp_container;
		}
		return max_container;
    }
};
