class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if (prices.size()==0) return 0;
        int mx=0;
        int minp=prices[0];
        for (int i=0;i<prices.size();i++)
        {
            if (minp>prices[i]) minp=prices[i];
            mx=max(mx,prices[i]-minp);
        }
        return mx;
    }
    int max(int a,int b)
    {
        return (a>b)?a:b;
    }
};