class Solution {
public:
    int longestConsecutive(vector<int> &num) {
       	 unordered_set<int> numset;
		for (int i=0;i<num.size();i++)
			numset.insert(num[i]);
		int max=0;
		for (int i=0;i<num.size();i++)
		{
			int count=0;
			if (numset.find(num[i])!=numset.end())
			{
				count++;
				int prev=num[i]-1;
				numset.erase(num[i]);
				while (numset.find(prev)!=numset.end())
				{
					count++;
					numset.erase(prev);
					prev--;
}
int next=num[i]+1;
while (numset.find(next)!=numset.end())
{
	count++;
	numset.erase(next);
	next++;
}
max=std::max(max,count);
}
}
return max;
    }
};


