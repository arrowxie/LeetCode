class Solution {
public:
    void rotate(int nums[], int n, int k) {
		k = k%n;
        rotate_part(nums, 0, n-1);
		rotate_part(nums,0,k-1);
		rotate_part(nums,k,n-1);
    }
	void rotate_part(int nums[], int begin, int end)
	{
		int b = begin;
		int e = end;
		int temp;
		while(b<e)
		{
			temp = nums[b];
			nums[b] = nums[e];
			nums[e] = temp;
			b++;
			e--;
		}
	}
};
