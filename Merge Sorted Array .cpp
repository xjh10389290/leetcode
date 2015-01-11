class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        vector<int> tmp;
        int minAindex=0;
        int minBindex=0;
        
        while (tmp.size()<m+n)
        {
            if (minAindex>=m)
            {
                tmp.push_back(B[minBindex]);
                minBindex++;
                continue;
            }
            if (minBindex>=n)
            {
                tmp.push_back(A[minAindex]);
                minAindex++;
                continue;
            }
            if (A[minAindex]<=B[minBindex])
            {
                tmp.push_back(A[minAindex]);
                minAindex++;
            }
            else
            {
                tmp.push_back(B[minBindex]);
                minBindex++;
            }
        }
        
        for (int i=0;i<m+n;i++)
        A[i]=tmp[i];
        
    }
};