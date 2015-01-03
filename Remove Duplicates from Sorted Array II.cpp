class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if (n<2) return n;
        int ans=n;
        int index=0;
        for (int i=0;i<n-2;i++)
        if (A[i]==A[i+1]&&A[i]==A[i+2])
        {
            ans--;
        }
        else
        A[index++]=A[i];
        
        A[index++]=A[n-2];
        A[index]=A[n-1];
        return ans;
    }
};