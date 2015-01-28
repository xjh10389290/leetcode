class Solution {
public:
    bool canJump(int A[], int n) {
        if (n==1) return true;
        int nowindex=0;
        int startindex=1;
        int endindex=A[0];
         if (endindex>=n-1) return true;
        while (1)
        {
            int newendindex=0;
            for (int i=startindex;i<=endindex;i++)
            {
                newendindex=std::max(newendindex,A[i]+i);
            }
            if (newendindex==endindex) return false;
            startindex=endindex+1;
            endindex=newendindex;
            if (endindex>=n-1) return true;

        }
        return false;
    }
};