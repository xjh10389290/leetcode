class Solution {
public:
    vector<vector<int>> allans;
    
    int len;
    vector<vector<int>> combinationSum2(vector<int> &c, int t) {
        sort(c.begin(),c.end());
        len=c.size();
        vector<int> tmp;
        gen(-1,0,t,c,tmp);
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
        for (int i=n+1;i<len;i++)
        if ((i==n+1||c[i]!=c[i-1])&&sum+c[i]<=t)
        {
            ans.push_back(c[i]);
            
            gen(i,sum+c[i],t,c,ans);
            ans.pop_back();
        }
    }
};