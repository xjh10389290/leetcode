class Solution {
public:
int firstMissingPositive(int A[], int n) {
        for(int i = 0; i < n; i ++)
        {
            int pick = A[i];
            while(pick > 0 && pick <= n && A[pick-1] != pick)
            {
                int tmp = A[pick-1];
                A[pick-1] = pick;
                pick = tmp;
            }
        }
        for(int i = 0; i < n; i ++)
          if(A[i] != i+1) return i+1;
        return n+1;
    }
};