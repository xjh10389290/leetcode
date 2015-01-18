class Solution {
public:
    void setZeroes(vector<vector<int> > &matrix) {
        int row=matrix.size();
        if (row==0) return;
        int col=matrix[0].size();
        if (col==0) return ;
        
        vector<int>zerorow(row,0);
        vector<int>zerocol(col,0);
        for (int i=0;i<row;i++)
        for (int j=0;j<col;j++)
        {
            if (matrix[i][j]==0)
            {
                zerorow[i]=1;
                zerocol[j]=1;
            }
        }
        
        for (int i=0;i<row;i++)
        for (int j=0;j<col;j++)
        {
            if (zerorow[i]+zerocol[j]>0)
            matrix[i][j]=0;
        }
    }
};