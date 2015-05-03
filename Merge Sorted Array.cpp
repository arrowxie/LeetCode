class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
		if(m==0)
		{
			for(int t=0;t<n;t++)
				A[t]=B[t];
		}
		else
		{
			int i=m-1;
			int j=n-1;
			while(i>=0&&j>=0)
			{
				if(A[i]>B[j])
				{
					A[i+j+1]=A[i];
					i--;
				}
				else
				{
					A[i+j+1]=B[j];
					j--;
				}
			}
			if(i<0)
			{
				for(int k=j;k>=0;k--)
					A[k]=B[k];
			}
		}
    }
};
