class Solution {
public:
    bool wordBreak(string s, unordered_set<string> &dict) {
        int len=s.length();
        int F[10000]={0};
       
        if (dict.empty()==true) return false;

        for (int i=0;i<len;i++)
             {
            for (unordered_set<string>::iterator it = dict.begin();it != dict.end(); ++it) 
                {   
                 if (i+1>=(*it).length()&&((i-(*it).length()==-1)||(F[i-(*it).length()])))
                 {
                     
                
                      if (jud(s,(*it),i-(*it).length()+1))
                        F[i]=1;
                 }
             }
         }
         if ( F[len-1]) return true;
         return false;
    }
    bool jud(string s,string t,int pos)
    {
        for (int i=0;i<t.length();i++)
        if (s[pos+i]!=t[i])
        return false;
        return true;
    }
    
};