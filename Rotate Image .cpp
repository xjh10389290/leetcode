class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
            int row=matrix.size();
            if (row==0) return ;
            int col=matrix[0].size();
            if (col==0) return ;
            
            for (int i=0;i<row-1;i++)
            {
                
                for (int j=i;j<col-1-i;j++)
                {
                    int ni=i;
                    int nj=j;

                    for (int k=1;k<=3;k++)
                    {
                        int t=ni;
                        ni=nj;
                        nj=row-t-1;
                        std::swap(matrix[i][j],matrix[ni][nj]);
                        
                    }
                }
            }
            
            return ;
    }
};