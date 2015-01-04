class Solution {
public:
    int uniquePaths(int m, int n) {
       int F[m][n];
       for (int i=0;i<m;i++)
       F[i][0]=1;
       for (int i=0;i<n;i++)
       F[0][i]=1;
       
       for (int i=1;i<m;i++)
       for (int j=1;j<n;j++)
       F[i][j]=F[i-1][j]+F[i][j-1];
       
       return F[m-1][n-1];
    }
};