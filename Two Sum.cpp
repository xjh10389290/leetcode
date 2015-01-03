class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        
        int length=numbers.size();
       multimap<int ,int> mmap;
        for (int i=0;i<length;i++)
        mmap.insert(pair<int,int>(numbers[i],i+1));
        sort(numbers.begin(),numbers.end());
        
        int f=0,l=length-1;
        vector<int> ans;

        while (true)
        {
            if (numbers[f]+numbers[l]>target)
            {
                l--;
                continue;
            }
            
            if (numbers[f]+numbers[l]<target)
            {
                f++;
                continue;
            }
            
            if (numbers[f]+numbers[l]==target)
            {
                multimap<int,int>::iterator it=mmap.find(numbers[f]);
                ans.push_back(it->second);
                mmap.erase(it);
        
                ans.push_back(mmap.find(numbers[l])->second);
                sort(ans.begin(),ans.end());
                return ans;
            }
            
    }
    
    }
};