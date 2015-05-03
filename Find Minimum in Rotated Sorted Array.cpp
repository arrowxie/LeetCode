class Solution {
public:
    int findMin(vector<int> &num) {
        int start = 0;
		int end = num.size()-1;
		int mid;
		while(start<end)
		{
			mid = (start+end)>>1;
			if(num[mid]>num[end])
				start = mid+1;
			else
				end = mid;
		}
		return num[start];
    }
};
