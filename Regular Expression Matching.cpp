class Solution {
public:
    bool isMatch(const char *s, const char *p) {
       int slen=strlen(s);
       int plen=strlen(p);
       bool *f=new bool[slen];
	   for (int i=1;i<slen;i++) f[i]=false;
	   f[0]=true;
       for (int i=0;i<plen;i++)
       {
           if (p[i]=='*') continue;
           bool star=false;
		   int iindex=i;
           while (p[i+1]=='*'&&i+1<plen){ i++; star=true;}
           if (star==false)
           {
               
               for (int j=slen;j>=1;j--)
               if ((p[iindex]=='.'||s[j-1]==p[iindex])&&f[j-1]==true)
                    f[j]=true;
                else
                    f[j]=false;
                f[0]=false;
               
           }
           else
           {
               if (p[iindex]=='.')
               {
				   for (int j=0;j<=slen;j++)
					   if (f[j]==true)
					   {
						   for (int k=j;k<=slen;k++)
							   f[k]=true;
						   break;
					   }
                    continue;
               }
               for (int j=0;j<=slen;j++)
               {
                   if (f[j]==true||(j!=0&&p[iindex]==s[j-1]&&f[j-1]==true))
                   f[j]=true;
                   else
                   f[j]=false;
               }
           }
            
            
       }
       
       return f[slen];
    }
};