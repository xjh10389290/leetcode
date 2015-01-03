class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int F[100000]={0};
        if (s.length()==0) return 0;
        F[0]=1;
        int max=1;
        for (int i=1;i<s.length();i++)
        {
            F[i]=1;
            if (s[i]!=s[i-1])
            {
                int j;
                for (j=i-1;j>=i-F[i-1];j--)
                {
                    if (s[i]==s[j])
                    break;
                }
                  if (j>=i-F[i-1]&&s[i]==s[j])
                F[i]=i-j;
                else
                F[i]=F[i-1]+1;
            }
            
            max=max<F[i]?F[i]:max;
        }
        return max;
    }
};