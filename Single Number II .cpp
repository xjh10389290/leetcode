class Solution {
public:
    int singleNumber(int A[], int n) {
        int bitcount[32]={0};
        for (int i=0;i<n;i++)
        {
            long long bit=1;
            for (int j=0;j<32;j++)
            {
                if ((A[i]&bit)>0)
                    bitcount[j]++;
                bit=bit<<1;
            }
        }
        long long bit=1;
        int ans=0;
        for (int i=0;i<32;i++)
        {
            ans=ans|((bitcount[i]%3)*bit);
            bit=bit<<1;
        }
        return ans;
    }
};