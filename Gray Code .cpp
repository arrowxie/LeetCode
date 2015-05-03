class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ret;
		const size_t size = 1<<n;
		for(size_t i=0;i!=size;++i)
			ret.push_back(binary_to_gray(i));
		return ret;
    }
private:
	int binary_to_gray(int n)
	{
		return (n>>1)^n;
	}
};
