class Solution {
public:
    bool *col;
    bool *diag;
    bool *rdiag;
    int ans;
    int totalNQueens(int n) {
        bool tmp[n]={0};
        col=&tmp[0];
        bool tmp1[2*n-1]={0};
        diag=&tmp1[0];
        bool tmp2[2*n-1]={0};
        rdiag=&tmp2[0];
        ans=0;
        help(0,n);
        return ans;
        
    }
    
    void help(int r,int n)
    {
        if (r==n)
        {
            ans++;
            return;
        }
        for (int i=0;i<n;i++)
        {
            if (col[i]==1) continue;
            if (diag[i+r]==1) continue;
            if (rdiag[r+n-i-1]==1) continue;
            
            col[i]=1;
            diag[i+r]=1;
            rdiag[r+n-i-1]=1;
            help(r+1,n);
            col[i]=0;
            diag[i+r]=0;
            rdiag[r+n-i-1]=0;            
        }
       
    }
    

};