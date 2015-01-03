class Solution {
public:
    int minPathSum(vector<vector<int> > &grid) {
        int m=grid.size();
        int n=grid[0].size();
        int f[m][n];
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                if (i==0||j==0) 
                {
                     f[i][j]=grid[i][j];
                    if (i+j==0) continue;
                    if (i==0)  f[i][j]+=f[i][j-1];
                    if (j==0)  f[i][j]+=f[i-1][j];
                        
                }
                else
                {
                    f[i][j]=min(f[i-1][j],f[i][j-1])+grid[i][j];
                }
            }
        }
        return f[m-1][n-1];
    }
    
   int min(int a,int b)
   {
       return a>b?b:a;
   }
};