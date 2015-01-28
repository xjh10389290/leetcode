class Solution {
public:
    int maxProfit(vector<int> &prices)
    {
        int len=prices.size();
        if (prices.size()==0) return 0;
        int minvalue=prices[0];
        int maxincome_l[len+1]={0};
        for (int i=1;i<prices.size();i++)
        {
            maxincome_l[i]=max(maxincome_l[i-1],prices[i]-minvalue);
            if (prices[i]<minvalue) minvalue=prices[i];
        }
        
        int maxvalue=prices[len-1];
        int maxincome_r[len+1]={0};
        for (int i=prices.size()-1;i>=0;i--)
        {
            maxincome_r[i]=max(maxincome_r[i+1],maxvalue-prices[i]);
            if (prices[i]>maxvalue) maxvalue=prices[i];
        }
        int ans=0;
        for (int i=0;i<len;i++)
        if (ans<maxincome_l[i]+maxincome_r[i+1]) ans=maxincome_l[i]+maxincome_r[i+1];
        return ans;
    }
};