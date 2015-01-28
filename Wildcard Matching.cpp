class Solution {
public:
    bool isMatch(const char *s, const char *p) {
       int slen=strlen(s);
       int plen=strlen(p);
       if(slen>30000) return false;
       bool *f=new bool[slen+1];
	   for (int i=1;i<=slen;i++) f[i]=false;
	   f[0]=true;
       for (int i=0;i<plen;i++)
       {


           if (p[i]!='*')
           {
               
               for (int j=slen;j>=1;j--)
               if ((p[i]=='?'||s[j-1]==p[i])&&f[j-1]==true)
                    f[j]=true;
                else
                    f[j]=false;
                f[0]=false;
               
           }
           else
           {

				   for (int j=0;j<=slen;j++)
					   if (f[j]==true)
					   {
						   for (int k=j;k<=slen;k++)
							   f[k]=true;
						   break;
					   }
                  
   

           }
            
            
       }
       
       return f[slen];
    }
};