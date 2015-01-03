class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        return search(A,0,n-1,target);
    }
    int search(int A[],int f,int l,int tar)
    {
        if (f+1>=l)
        {
            if (A[f]==tar) return f;
            if (A[l]==tar) return l;
            if (A[l]<tar) return l+1;
            if (A[f]>tar) return f;
            if (A[f]<tar) return f+1;
        }
        
        int mid=(f+l)/2;
        if (A[mid]==tar) return mid;
        if (A[mid]>tar) return search(A,f,mid,tar);
        if (A[mid]<tar) return search(A,mid,l,tar);
    }
};