class Solution {
public:
    vector<vector<string>> allans;
    bool f[1000][1000];
    int len;
    string s;
    void find(int start,vector<string> str)
    {
        for (int end=start;end<len;end++)
        if (f[start][end])
        {
            str.push_back(s.substr(start, end-start+1));
            if (end+1==len)
                allans.push_back(str);
                else 
            find(end+1,str);
            
            str.pop_back();
        }
    }
    vector<vector<string>> partition(string s_string) {
        len=s_string.length();
        s=s_string;
        //set true for one word
        //f=new bool[len][len]
        for (int i=0;i<len;i++)
        {
            f[i][i]=true;
        }
        for (int i=2;i<=len;i++)
        {                               
            for (int start=0;start+i-1<len;start++)
            {
                int end=start+i-1;
                f[start][end]=false;
                if (s[start]==s[end])
                {
                    if (start+1>=end-1)
                        f[start][end]=true;
                    else
                        f[start][end]=f[start+1][end-1];
                }
            }
        }
        vector<string> tmp;
        find(0,tmp);
        
        return allans;
    }
};