class Solution {
public:
int *col,*diag,*rdiag;
int *colpos;
vector<vector<string>> allans;
    vector<vector<string>> solveNQueens(int n) {
        int tmp1[n]={0};
        int tmp2[2*n-1]={0};
        int tmp3[2*n-1]={0};
        int tmp4[n]={0};
        colpos=&tmp4[0];
        col=&tmp1[0];
        diag=&tmp2[0];
        rdiag=&tmp3[0];
        getans(0,n);
        return allans;
        
    }
    
    void getans(int r,int n)
    {
        
        if (r==n)
        {
            vector<string> tmp;
            for (int i=0;i<n;i++)
            {
                string onerow="";
                for (int j=0;j<colpos[i];j++)
                   onerow=onerow+'.';
                  onerow=onerow+'Q';
                for (int j=colpos[i]+1;j<n;j++)
                    onerow=onerow+'.';
                tmp.push_back(onerow);   
                
            }
            allans.push_back(tmp); 
            return ;
        }
        
        for (int i=0;i<n;i++)
        {
            if (col[i]==1) continue;
            if (diag[r+i]==1) continue;
            if (rdiag[n-i+r]==1) continue;
            
            col[i]=1;
            diag[r+i]=1;
            rdiag[n-i+r]=1;
            colpos[r]=i;
            
            getans(r+1,n);

            col[i]=0;
            diag[r+i]=0;
            rdiag[n-i+r]=0;            
        }
        
    }
};