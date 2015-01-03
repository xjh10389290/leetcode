class Solution {
public:
    int reverse(int x) {
        if (x==0) return 0;
        int ans=x/abs(x);
        x=abs(x);
        long long anss=0;
        while (x>=1)
        {
            anss=anss*10;
            anss+=x%10;
            x=x/10;
            
        }
       
        return (anss*ans<INT_MIN || anss*ans>INT_MAX) ? 0 : anss*ans;
    }
};