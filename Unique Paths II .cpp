class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> > &obs) {
        int row=obs.size();
        if (row==0) return 0;
        int col=obs[0].size();
        if (col==0) return 0;
        int F[row+1][col+1]={0};
        if (obs[0][0]==1) return 0;
        F[0][0]=1;
        for (int i=0;i<row;i++)
        {
            for (int j=0;j<col;j++)
            {
                if (i==0&&j==0) continue;
                if (obs[i][j]==1) 
                {
                    F[i][j]=0;
                    continue;
                }
                if (i==0)
                {
                    F[i][j]=F[i][j-1];
                    continue;
                }
                if (j==0)
                {
                    F[i][j]=F[i-1][j];
                    continue;
                }
                F[i][j]=F[i-1][j]+F[i][j-1];
            }
        }
        
        return F[row-1][col-1];
    }
    
};