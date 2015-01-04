class Solution {
public:
    int climbStairs(int n) {
        int f[3]={0,1,2};
        for (int i=3;i<=n;i++)
        {
            f[i%3]=f[(i-1)%3]+f[(i-2)%3];
        }
        
        return f[n%3];
    }
};