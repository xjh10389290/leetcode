class Solution {
public:
    vector<int> getRow(int k) {
        vector<int> a;
        vector<int> b;
        a.push_back(1);
        b.push_back(1);
        b.push_back(1);
        if (k==0) return a;
        if (k==1)  return b;
        for (int i=2;i<=k;i++)
        {
            a.clear();
            a.push_back(1);
            for (int j=0;j<b.size()-1;j++)
            {
                a.push_back(b[j]+b[j+1]);
            }
            
            a.push_back(1);
            
            b.clear();
            b=a;
        }
        
        return a;
    }
};