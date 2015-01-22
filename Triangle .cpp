class Solution {
public:
    int minimumTotal(vector<vector<int> > &t) {
        int row=t.size();
        if (row==0) return 0;

        int F[row+1][row+1]={0};
        for (int i=0;i<row;i++)
        {
            if (i==0)
            {
                F[0][0]=t[0][0];
                continue;
            }
            for (int j=0;j<i+1;j++)
            {
                
                if (j==0) F[i][j]=t[i][j]+F[i-1][j];
                if (j==i) F[i][j]=t[i][j]+F[i-1][j-1];
                if (j>0&&j<(i)) F[i][j]=t[i][j]+std::min(F[i-1][j-1],F[i-1][j]);
            }
        }
        int minm=F[row-1][0];
        for (int i=0;i<row;i++)
            minm=std::min(minm,F[row-1][i]);
        return minm;
        
    }
};