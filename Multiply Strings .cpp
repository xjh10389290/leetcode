class Solution {
public:
struct HP
{int len,s[10000];};
    void Multi(const HP a,const HP b, HP &c)
    {
        int i,j; c.len=a.len+b.len;
        for (int i=1;i<=c.len;i++) c.s[i]=0;
        for (int i=1;i<=a.len;i++) 
			for (int j=1;j<=b.len;j++)
				c.s[i+j-1]+=a.s[i]*b.s[j];
        for (int i=1;i<c.len;i++) {c.s[i+1]+=c.s[i]/10;c.s[i]%=10;}i=c.len;
        while (c.s[i]){c.s[i+1]=c.s[i]/10;c.s[i]%=10;i++;}
        while (i>1&&!c.s[i])i--;c.len=i;
        
    }
    string multiply(string num1, string num2) {
        HP a,b,c;
        for (int i=num1.length()-1;i>=0;i--)
            a.s[num1.length()-i]=num1[i]-'0';
            a.len=num1.length();
        for (int i=num2.length()-1;i>=0;i--)
            b.s[num2.length()-i]=num2[i]-'0';
            b.len=num2.length();
             Multi(a, b,c);
        string ans;
        for (int i=c.len;i>=1;i--)
        {
            char tmp=c.s[i]+'0';
            ans+=tmp;
        }
        return ans;
    }
    

};