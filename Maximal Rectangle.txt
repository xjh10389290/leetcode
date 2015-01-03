class Solution {
public:
    int maximalRectangle(vector<vector<char> > &matrix) {
        
        if (matrix.size()==0) return 0;
        int r=matrix.size();
        int c=matrix[0].size();
        int maxarea=0;
        if (r*c==0) return 0;
        vector<int> dp(c+1,0);
        
        for (int i=0;i<r;i++)
        {
            stack<int> s;
            for (int j=0;j<=c;j++)
            {
                
                if (j<c)
                {
                    if (matrix[i][j]=='1')
                    {
                        dp[j]++;
                    }
                    else
                    dp[j]=0;
                }
                
                while (!s.empty()&&(j==c||dp[s.top()]>dp[j]))
                {
                    int h=dp[s.top()];
                    while(!s.empty()&&dp[s.top()]==h) s.pop();
                    int idx=s.empty()?-1:s.top();
                    if (maxarea<h*(j-idx-1)) maxarea=h*(j-idx-1);
                }
                s.push(j);
                
            }
        }
        return maxarea;
    }
    

};