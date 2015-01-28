class Solution {
public:
    vector<string> allans;
    vector<string> anagrams(vector<string> &strs) {
        int len=strs.size();
        if (len==0) return allans;
       
        map<string,int> m;
        bool ana[len+1];
        ana[0]=false;
        for (int i=0;i<strs.size();i++)
        {
            ana[i+1]=false;
            string str=strs[i];
            sort(str.begin(),str.end());
            if (m[str]>0)
            {
                int index=m[str];
                ana[index]=true;
                ana[i+1]=true;
                m[str]=-1;
                continue;
            }
            if (m[str]==-1)
            {
                ana[i+1]=true;
                continue;
            }
            
            if (m[str]==0)
            {
                m[str]=i+1;
            }
            
        }
        
        for (int i=0;i<strs.size();i++)
        if (ana[i+1]==true)
        allans.push_back(strs[i]);
        return allans;
    }
};