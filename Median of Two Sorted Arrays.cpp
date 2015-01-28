class Solution {
public:
    double findMedianSortedArrays(int A[], int m, int B[], int n) {
        if (m>n) return findMedianSortedArrays(B,n,A,m);
        int imin=0,imax=m;
        while (imin<=imax)
        {
            int i=(imin+imax)/2;
            int j=(m+n+1)/2-i;
            if (j>0&&i<m&&A[i]<B[j-1])
            {
                imin=i+1;
                continue;
            }
            if (i>0&&j<n&&A[i-1]>B[j])
            {
                imax=i-1;
                continue;
            }
            //if odd,right part must +1,so get mostright of left part
            int num1;
            if (i==0) num1=B[j-1];
            else if (j==0) num1=A[i-1];
            else num1=std::max(A[i-1],B[j-1]);
            
            if ((m+n)%2==1) return num1;
            int num2;
            if (i==m) num2=B[j];
            else if (j==n) num2=A[i];
            else num2=std::min(A[i],B[j]);            
            
            return (num1+num2)/2.0;
            
            
        }
    }
};