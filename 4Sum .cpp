class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        vector<vector<int> > allans;
        sort(num.begin(),num.end());
        int len=num.size();
        int i1,i2,i3,i4;
        for(int i1=0;i1<len;i1++)
        {
            if (i1!=0&&num[i1]==num[i1-1]) continue;
            for (int i2=i1+1;i2<len;i2++)
            {
                if (i2>i1+1&&num[i2]==num[i2-1]) continue;
                for (i3=i2+1,i4=len-1;i3<i4;)
                {
                    if (i3>i2+1&&num[i3]==num[i3-1]) 
                    {
                        i3++;
                        continue;
                    }
                    if (i4<len-1&&num[i4]==num[i4+1])
                    {
                        i4--;
                        continue;
                    }
                    
                    int ans=num[i1]+num[i2]+num[i3]+num[i4];
                    if (ans==target)
                    {
                        vector<int> tmp;
                        tmp.push_back(num[i1]);
                        tmp.push_back(num[i2]);
                        tmp.push_back(num[i3]);
                        tmp.push_back(num[i4]);
                        allans.push_back(tmp);
                        i3++;i4--;
                        continue;
                    }
                    if (ans>target) i4--;
                    else i3++;
                }
            }
        }
        
        return allans;
    }
};