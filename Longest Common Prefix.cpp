class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        if (strs.size()==0) return "";
        int n=strs.size();
        int m=strs[0].size();
        bool f=true;
        int j;
        for (j=0;j<m&&f;j++)
        {
             for (int i=1;i<n;i++)
            {
                if (strs[0][j]!=strs[i][j])
                {
                    f=false;
                    break;
                }
            }
        }
        if (f==true) return strs[0];
        return strs[0].substr(0,j-1);
    }
};