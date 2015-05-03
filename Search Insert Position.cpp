class Solution {
public:
    int searchInsert(int A[], int n, int target) {
		if(n==0)
			return 0;
        int begin=0;
		int end = n-1;
		int temp;
		while(begin<=end)
		{
			temp = (begin+end)>>1;
			if(A[temp]==target)
				return temp;
			if(A[temp]<target)
				begin = temp+1;
			if(A[temp]>target)
				end = temp-1;
		}
		return begin;
    }
};
