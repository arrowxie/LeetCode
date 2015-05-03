class Solution {
public:
    int maxSubArray(int A[], int n) {
		if(n==0)
			return 0;
        int max=A[0];
		int sum=A[0];
		int p=1;
		while(p < n)
		{
			if(sum<0)
			{
				sum = A[p];
				p++;				
			}
			else
			{
				sum += A[p];
				p++;
			}
			if(sum>max)
					max = sum;
		}
		return max;
    }
};
