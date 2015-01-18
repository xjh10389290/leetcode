class Solution {
public:
    int numTrees(int n) {
        int F[1000]={0};
        F[1]=1;
        F[0]=1;
        for (int i=2;i<=n;i++)
        {
            for (int j=0;j<i;j++)
            {
                F[i]+=F[j]*F[i-j-1];
            }
        }
        return F[n];
    }
};