class Solution {
public:
    int N,K;
    vector<vector<int>> ans;
    vector<int> comb;
    void gencomb()
    {
        if (comb.size()==K)
        {
            ans.push_back(comb);
            return;
        }
        for (int i=1;i<=N;i++)
            if (comb.size()==0||i>comb[comb.size()-1])
            {
                comb.push_back(i);
                gencomb();
                comb.pop_back();
            }
    }
    
    vector<vector<int>> combine(int n, int k) {
        N=n;
        K=k;
        ans.clear();
  
        comb.clear();
        gencomb();
        return ans;
    }
};