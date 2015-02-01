class Solution {
public:
    int numDistinct(string s, string t) {
int slen=s.length();
int tlen=t.length();
if (slen<tlen) return 0;
vector<vector<int>> F;

vector<int> tmp(tlen+1,0);
for (int i=0;i<=slen;i++)
F.push_back(tmp);

F[0][0]=1;
for (int i=1;i<=slen;i++)
for (int j=0;j<=tlen;j++)
{
	if (j==0)
	{
		F[i][j]=1;
		continue;
	}
	F[i][j]=F[i-1][j];
	if (s[i-1]==t[j-1])
	F[i][j]+=F[i-1][j-1];
}		
return F[slen][tlen];
    }
};
