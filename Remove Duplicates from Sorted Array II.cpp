class Solution {
public:
    int removeDuplicates(int A[], int n) {
        int i,j=0;
		int count = 1;
		if(n<=1)
			return n;
		
		for(i=1;i<n;i++)
		{
			if(A[i]!=A[j])
			{
				A[++j]=A[i];
				count = 1;
			}
			else
			{
				count++;
				if(count<=2)
				{
					A[++j]=A[i];						
				}
				
			}
		}
		return j+1;
    }
};
