class Solution {
public:

int minCut(string s) 
{
	int slen=s.length();
	bool P[slen][slen];
	memset(P,false,sizeof(P));
	for (int i=1;i<=slen;i++)
		for (int j=0;j<=slen-i;j++)
		{
			if (i==1)
			{
				P[j][j]=true;
				continue;
}
if (i==2)
{
	if (s[j]==s[j+i-1])
		P[j][j+i-1]=true;
	continue;
}
if (s[j]==s[j+i-1])
{
	P[j][j+i-1]=P[j+1][j+i-2];
}
}

int F[slen]={0};
for (int i=1;i<slen;i++)
{
	F[i]=INT_MAX;
	for (int j=0;j<=i;j++)
	if (P[j][i]==true)
	{
		if (j==0)
		{
			F[i]=0;
			break;
}
else
{
	F[i]=std::min(F[i],F[j-1]+1);
}
}
}

return F[slen-1];
}

	
};


