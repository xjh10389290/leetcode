class Solution {
public:
	unordered_map<int,int> num;
	vector<vector<int> > allans;
	vector<int> Svalue;
	int L;
	void getoneans(vector<int> S,int bitnum,int n)
	{
		if (n==L)
		{
			sort(S.begin(),S.end());
			allans.push_back(S);
			return ;
		}
		int bit=bitnum&1;
		bitnum=bitnum>>1;
		n++;
		if (bit!=0)
		{
			for (int i=1;i<=num[Svalue[n-1]];i++)
			{
				vector<int> tmp(S);
				for (int j=1;j<=i;j++)
				{
					tmp.push_back(Svalue[n-1]);
				}
				getoneans(tmp,bitnum,n);

			}
		}
		else
		{
			getoneans(S,bitnum,n);
		}
	}


    vector<vector<int> > subsetsWithDup(vector<int> &S) {
        //首先用二进制表示选出的号码
        //把所有号码放入unorder_map里面，value就是号码出现的数目
        sort(S.begin(),S.end());
		Svalue=S;
		Svalue.erase(unique(Svalue.begin(),Svalue.end()),Svalue.end());
        for (int i=0;i<S.size();i++)
        {
            if (num.count(S[i])==0)
			{
				num[S[i]]=1;
			}
			else
			{
				num[S[i]]++;
			}
        }

		//生成二进制变量，二进制的长度是num.size()
		int len=num.size();
		L=len;
		int bitlen=1;

		bitlen=bitlen<<len;

		//每一个二进制表示选取的那一位数
		//空vector
		vector<int> tmp;
		for (int bitnum=0;bitnum<bitlen;bitnum++)
		{
			getoneans(tmp,bitnum,0);
		}
        return allans;
    }
};