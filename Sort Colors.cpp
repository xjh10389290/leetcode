class Solution {
public:
    void sortColors(int A[], int n) {
        int a[3]={0};
        for (int i=0;i<n;i++)
            a[A[i]]++;
            int index=0;
        for (int i=0;i<a[0];i++)
        A[index++]=0;
                for (int i=0;i<a[1];i++)
        A[index++]=1;
                for (int i=0;i<a[2];i++)
        A[index++]=2;
    }
};