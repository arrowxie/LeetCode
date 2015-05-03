class Solution {
public:
    int singleNumber(int A[], int n) {
        if(n==0)
			return -1;
		int count=0;
		sort(A,A+n);
		int temp = A[0];
		for(int i=0;i<n;i++)
		{
			if(A[i]==temp)
				count++;
			else
			{
				if(count>=3)
				{
					temp = A[i];
					count=1;
				}
				else
					return A[i-1];
			}
		}
		if(count<3)
			return A[n-1];
		return -1;
    }
};
