class Solution {
public:
    int maxProduct(int A[], int n) {
        int max=A[0],min=A[0],ans=max;
        for (int i=1;i<n;i++)
        {
            if (A[i]<0)
            std::swap(max,min);
            max=std::max(A[i],max*A[i]);
            min=std::min(A[i],min*A[i]);
            ans=std::max(max,ans);
        }
        return ans;
    }
};