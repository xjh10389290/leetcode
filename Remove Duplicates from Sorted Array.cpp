class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if (n<=1) return n;
        int cur=1;
        int next=1;
        
        while (next<n)
        {
            if (A[next]==A[next-1])
            {
                next++;
                continue;
            }
            else
            {
                A[cur]=A[next];
                cur++;
                next++;
            }
        }
        
        return cur;
    }
};