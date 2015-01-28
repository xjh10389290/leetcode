class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> fac;
        list<int> num;
        string ans="";
        fac.push_back(1);
        for (int i=1;i<=n;i++)
        {
            num.push_back(i);
            fac.push_back(fac[i-1]*i);
        }
        for (int i=n-1;i>=1;i--)
        {
            list<int>::iterator it=num.begin();
            while (k>fac[i]) 
            {
                k-=fac[i];
                it++;
            }
            char tmp=*it+'0';
            num.erase(it);
            ans+=tmp;
            
        }
        
        for (list<int>::iterator it=num.begin();it!=num.end();it++)
        {
            char tmp=*it+'0';
            
            ans+=tmp;            
        }
        return ans;
    }
};