class Solution {
public:
    int *f;
    bool *b;
    vector<vector<int>> allans;
    vector<vector<int>> permuteUnique(vector<int> &num) {
        sort(num.begin(),num.end());
        f=new int[num.size()];
        b=new bool[num.size()];
        for (int i=0;i<num.size();i++)
        b[i]=true;
        gen(0,num.size(),num);
        return allans;
    }
    
    void gen(int k,int n,vector<int> &num)
    {
        if (k==n)
        {
            vector<int> tmp(n,0);
            for (int i=0;i<n;i++)
            tmp[f[i]]=num[i];
            allans.push_back(tmp);
			return ;
        }
        for (int i=0;i<n;i++)
        {
            if (b[i]&&(!k||(num[k]==num[k-1]&&i>f[k-1])||(num[k]!=num[k-1])))
            {
                f[k]=i;
                b[i]=false;
                gen(k+1,n,num);
                b[i]=true;
            }
        }
    }
};