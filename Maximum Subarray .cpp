class Solution {
public:
    int maxSubArray(int A[], int n) {
        int max=0;
        int lastsum=0;
        for (int i=0;i<n;i++)
        {
            if (i==0)
            {
                max=A[0];
                lastsum=max;
                continue;
            }
            else
            {
                if (A[i]>A[i]+lastsum)
                {
                    lastsum=A[i];
                
                }
                else
                {
                    lastsum=A[i]+lastsum;
                }
                
                if (lastsum>max) max=lastsum;
            }
        }
        
        return max;
    }
};