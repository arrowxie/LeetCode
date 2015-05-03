class Solution {
public:
    int hammingWeight(uint32_t n) {
        int num = 0;
		while(n)
		{
			if(n&1)
				num++;
			n = n>>1;
		}
		return num;
    }
};

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int num = 0;
		int flag = 1;
		while(flag)
		{
			if(n&flag)
				num++;
			flag = flag<<1;
		}
		return num;
    }
};

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int num = 0;
		while(n)
		{
			num++;
			n = (n-1)&n;
		}
		return num;
    }
};
