class Solution {
public:
    bool isValidSudoku(const vector<vector<char> >  &board)
    {
        int hash[10];
        //row
        for (int i=0;i<9;i++)
        {
            memset(hash,0,sizeof(hash));
            for (int j=0;j<9;j++)
            if(board[i][j]>='0'&&board[i][j]<='9')
            {
                hash[board[i][j]-'0']++;
                if (hash[board[i][j]-'0']>1)
                return false;
            }
        }
        //col
        for (int i=0;i<9;i++)
        {
            memset(hash,0,sizeof(hash));
            
            for (int j=0;j<9;j++)
            if(board[j][i]>='0'&&board[j][i]<='9')
            {
                hash[board[j][i]-'0']++;
                if (hash[board[j][i]-'0']>1)
                return false;
            }
        }
        //cell
        for (int i=0;i<3;i++)
            for (int j=0;j<3;j++)
            {
                memset(hash,0,sizeof(hash));
                for (int k=0;k<9;k++)
                if(board[i*3+k%3][j*3+k/3]>='0'&&board[i*3+k%3][j*3+k/3]<='9')
                {
                    hash[board[i*3+k%3][j*3+k/3]-'0']++;
                    if (hash[board[i*3+k%3][j*3+k/3]-'0']>1)
                     return false;
                }
            }
            return true;
    }
};