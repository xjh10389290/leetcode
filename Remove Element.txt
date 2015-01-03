class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        vector<int> V;
        for (int i=0;i<n;i++)
        if (A[i]!=elem)
        {
            V.push_back(A[i]);
        }
        for (int i=0;i<V.size();i++)
        {
            A[i]=V[i];
        }
        
        n=V.size();
        return n;
    }
};