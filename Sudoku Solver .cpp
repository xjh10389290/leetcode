class Solution {
public:
    void solveSudoku(vector<vector<char>> &board) {
         util(board,0);
    }
    
    bool util(vector<vector<char>> &board,int pos)
    {
        if (pos==81)
        return true;
        //pos to row & col
        int row=pos/9;
        int col=pos%9;
        //not empty
        if (board[row][col]!='.')
            return util(board,pos+1);
        else
        {
            for (char c='1';c<='9';c++)
            {
                // for 1~9 try
                if (!tryRow(board,row,col,c) &&  !tryCol(board,row,col,c)    &&  !tryRec(board,row,col,c))
                {
                    board[row][col]=c;
                    if (util(board,pos+1))
                        return true;
                    else
                        board[row][col]='.';
                }
            }
        }
        
        return false;
        
    }
    
    bool tryRow(vector<vector<char>> &board,int row,int col,char c)
    {
        for (int i=0;i<9;i++)
          if (board[row][i]==c)
            return true;
        return false;
    }
    bool tryCol(vector<vector<char>> &board,int row,int col,char c)
    {
        for (int i=0;i<9;i++)
            if (board[i][col]==c)
                 return true;
        return false;        
    }
    bool tryRec(vector<vector<char>> &board,int row,int col,char c)
    {
        int bigrow = row / 3, bigcol = col / 3;
        for (int m = 3 * bigrow; m < 3 * (bigrow + 1); m++)
        {
            for (int n = 3 * bigcol; n < 3 * (bigcol + 1); n++)
                if (board[m][n] == c)
                    return true;
        }
        return false;
    }
};