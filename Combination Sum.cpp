class Solution {
public:
    vector<vector<int>> allans;
    
    int len;
    vector<vector<int>> combinationSum(vector<int> &c, int t) {
        sort(c.begin(),c.end());
        len=c.size();
        vector<int> tmp;
        gen(0,0,t,c,tmp);
        return allans;
        
    }
    
    void gen(int n,int sum,int t,vector<int> &c,vector<int> &ans)
    {
        if (sum==t)
        {
            allans.push_back(ans);
            return ;
        }
        if (sum>t)
        {
            
            return ;
        }       
        for (int i=n;i<len;i++)
        if (sum+c[i]<=t)
        {
            ans.push_back(c[i]);
            
            gen(i,sum+c[i],t,c,ans);
            ans.pop_back();
        }
    }
};