class Solution {
public:
    bool isPalindrome(string s) {
        if (s.length()==0) return true;
        string str;
        for (int i=0;i<s.length();i++)
        if ((s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
        {
            if (s[i]>='0'&&s[i]<='9')
            str.insert(0,1,s[i]);
            else
            {
                if (s[i]>='a'&&s[i]<='z')
                    str.insert(0,1,s[i]);
                else
                  str.insert(0,1,s[i]-'A'+'a');  
            }
        }
        
        for (int i=0;i<str.length()/2;i++)
        {
            if (str[i]!=str[str.length()-i-1])
            return false;
        }
        return true;
    }
};