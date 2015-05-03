class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n==0) return 0;
        int j=0;
		int i=0;
		for(i=0;i<n;i++)
		{
			if(A[j]!=A[i])
			    A[++j]=A[i];
		}
		return j+1;
    }
};
