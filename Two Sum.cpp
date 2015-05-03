/*
Map：
<K, V>为<值，下标>，map中保存的是已经扫描过的number。
这是一种很直观很自然的做法：
对于numbers[i]，如果map中存在K=target-numbers[i]，则要求的解为V（K=target-numbers对应的）和i；如果不存在，则向map中添加<numbers[i], i>。
*/

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
		vector<int>	result;
		map<int,int> my_map;
		map<int,int>::iterator iter;
		for(int i=0;i<numbers.size();i++)
		{
			const int temp = target-numbers[i];
			iter = my_map.find(temp);
			if(iter!=my_map.end()) //存在
			{				
				result.push_back(iter->second);	
				result.push_back(i+1);
				break;
			}
			else
				my_map[numbers[i]] = i+1;
		}
		return result;
    }
};

