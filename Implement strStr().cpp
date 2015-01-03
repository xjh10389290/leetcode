class Solution {
public:
    int strStr(char *haystack, char *needle) {
        
        int haystacklen=strlen(haystack);
       int needlelen=strlen(needle);
       if (haystacklen+needlelen==0)  return 0;
       for (int i=0;i<1+haystacklen-needlelen;i++)
       {
           bool same=true;
             for (int j=i;j<i+needlelen;j++)
             {
                if (haystack[j]!=needle[j-i])
                {
                    same=false;
                    break;
                }
             }
             
             if (same==true) return i;
       }
    return -1;
    }
};