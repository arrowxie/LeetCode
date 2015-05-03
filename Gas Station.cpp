class Solution {
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        int start = -1;
		int total=0;
		int sum = 0;
		for(vector<int>::size_type i=0;i!=gas.size();++i)
		{
			sum +=gas[i]-cost[i];
			total+=gas[i]-cost[i];
			if(sum<0)
			{
				sum =0;
				start = i;
			}
		}
		return total>=0? start+1:-1;
		
    }
};
