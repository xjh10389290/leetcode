class Solution {
public:
    int calculateMinimumHP(vector<vector<int> > &dun) {
        int row=dun.size();
        int col=dun[0].size();
        
        int dp[row][col]={0};
        
        for (int i=row-1;i>=0;i--)
        {
            for (int j=col-1;j>=0;j--)
            {
                if (i+1==row&&j+1==col)
                {
                   dp[i][j]=max(1,1-dun[i][j]);
                   continue;
                }
                if (j+1==col) 
                {
                    dp[i][j]=max(dp[i+1][j]-dun[i][j],1);
                    continue;
                }
                if (i+1==row) 
                {
                    dp[i][j]=max(dp[i][j+1]-dun[i][j],1);
                    continue;
                }
                
                dp[i][j]=min(max(dp[i+1][j]-dun[i][j],1),max(dp[i][j+1]-dun[i][j],1));
            }
        }
        
        return dp[0][0];
    }
    
};