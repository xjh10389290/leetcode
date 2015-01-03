class Solution {
public:
int low=-1;
int upp=-1;
    vector<int> searchRange(int A[], int n, int target) {
        vector<int> a;
        a.clear();
        searchlowwer(A,n,0,n-1,target);
        searchupper(A,n,0,n-1,target);
        a.push_back(low);
        a.push_back(upp);  
        return a;
    }
    
    void searchlowwer(int A[],int n,int f,int l,int target)
    {
        if (f+1>=l)
        {
            if (A[f]==target) {low=f;return;}
            if (A[l]==target) {low=l;return;}
            return ;
        }
        int mid=(f+l)/2;
        if (A[mid]==target) return searchlowwer(A,n,f,mid,target);
        if (A[mid]<target) return searchlowwer(A,n,mid,l,target);
        if (A[mid]>target) return searchlowwer(A,n,f,mid,target);
    }
    
    void searchupper(int A[],int n,int f,int l,int target)
    {
        if (f+1>=l)
        {
            if (A[l]==target) {upp=l;return;}
            if (A[f]==target) {upp=f;return;}
            return ;
        }
        int mid=(f+l)/2;
        if (A[mid]==target) return searchupper(A,n,mid,l,target);
        if (A[mid]<target) return searchupper(A,n,mid,l,target);
        if (A[mid]>target) return searchupper(A,n,f,mid,target);
    }
};