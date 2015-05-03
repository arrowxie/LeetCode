class Solution {
public:
    void sortColors(int A[], int n) {
        int start=0;
		int end = n-1;
		for(int i=0;i<end+1;)
		{
			if(A[i]==0)
				swap(A[i++],A[start++]);
			else if(A[i]==2)
				swap(A[i],A[end--]);
			else
				i++;
		}
    }
};
