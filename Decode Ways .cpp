class Solution {
public:
    int numDecodings(string s) {
        
        int len=s.length();
        if (len==0) return 0;
        int F[len+1];
        F[0]=1;
        F[1]=1;
        if ((s[0]=='0')) return 0;
        for (int i=1;i<len;i++)
        {
            if (((s[i]=='0')&&(s[i-1]=='0'))||(s[i]<'0')||(s[i]>'9')) 
            {
                return 0;
            
            }
            if (s[i]!='0') F[i+1]=F[i];
            else
            F[i+1]=0;
            if (s[i-1]<'2'&&s[i-1]>'0')
            {
                F[i+1]+=F[i-1];
                continue;
            }
            if (s[i-1]<'3'&&s[i]<'7'&&s[i-1]>'0')
            {
                F[i+1]+=F[i-1];
                continue;
            }
        }
        
        return F[len];
    }
};