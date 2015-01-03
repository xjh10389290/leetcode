class Solution {
public:
    int jump(int A[], int n) {
        
        int i=0;
        int next=A[0];
        int step=1;
        if (n<=1)
        return 0;
        while (next<n-1)
        {
            int newnext=next;
            for (;i<=next;i++)
            {
                newnext=max(newnext,A[i]+i);
            }
            
           
            
                            if (newnext <= next)
                {
                    return -1;
                }
                 next=newnext;
                step++;
                
                
        }
        return step;
    }
};