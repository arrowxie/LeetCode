//从后往前找，找到第一个非递增序列 即num[i-1]<num[i] 
// 从i位置往后找，找到第一个大于num[i-1]的数 num[j]
//交换num[j]和num[i-1]
//从i到最后的数转置一下
class Solution {
public:
    void nextPermutation(vector<int> &num) {
        int end = num.size()-1;
		int povit = end;
		while(povit>0)
		{
			if(num[povit]>num[povit-1])
				break;
			povit--;
		}
		if(povit>0)
		{
			povit--;
			int large = end;
			while(num[large]<=num[povit]) 
				large--;
			swap(num[large],num[povit]);
			reverse(num.begin()+povit+1,num.end());
		}
		else
			reverse(num.begin(),num.end());
    }
};
