class Solution {
public:
    int lengthOfLastWord(const char *s) {
        int len=strlen(s);
        int f=0,l=-1;
        int out=0;
        while(len--&&!out)
        {
            if (l==-1&&s[len]!=' ')
                l=len;
            if (l!=-1)
            {
                if (s[len]!=' ')
                f=len;
                else
                out=1;
            }
        }
        return l-f+1;
    }
};