class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        vector<vector<int>> ans;
        if (num.size()<3) return ans;
        sort(num.begin(),num.end());
        for (int a=0;a<num.size();a++)
        {
            if (a>0&&num[a]==num[a-1]) continue;
            for (int b=a+1, c=num.size()-1;b<c;)
            {
                if (b>a+1&&num[b]==num[b-1]) 
                {
                    b++;continue;
                }
                if (c+1<num.size()&&num[c]==num[c+1])
                {
                    c--;
                    continue;
                }
                
                if (num[a]+num[b]+num[c]==0)
                {
                    vector<int> tmp;
                    tmp.push_back(num[a]);
                    tmp.push_back(num[b]);
                    tmp.push_back(num[c]);
                    ans.push_back(tmp);
                     b++;
                     c--;
                     continue;

                }
                
                if (num[a]+num[b]+num[c]<0) b++;
                else c--;

            }
            

        }  
            return ans;
        }
  
};