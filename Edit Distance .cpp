class Solution {
public:
    int minDistance(string word1, string word2) {
        int lenw1=word1.length();
	   int lenw2=word2.length();
	    if (lenw1==0) return lenw2;
	    if (lenw2==0) return lenw1;
	    if (lenw1<lenw2) return minDistance(word2,word1);
		int len=std::max(lenw1,lenw2);
		vector<vector<int> > F;
        vector<int> tmp(len+1,0);
		for (int i=0;i<=len;i++)
			F.push_back(tmp);


		for (int i=0;i<=lenw1;i++)
			for (int j=0;j<=lenw2;j++)
			{
				int indexi=i-1;
				int indexj=j-1;
				if (j==0)
				{
					F[i][j]=i;
					continue;
				}
				if (i==0)
				{
					F[i][j]=j;
					continue;
				}
				if (word1[indexi]==word2[indexj])
				{
					F[i][j]=F[i-1][j-1];
}
else
{
	F[i][j]=F[i-1][j-1]+1;
	F[i][j]=std::min(F[i][j],F[i-1][j]+1);
	F[i][j]=std::min(F[i][j],F[i][j-1]+1);
}
}
return F[lenw1][lenw2];
    }
};
