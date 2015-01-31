class Solution {
public:
    int candy(const vector<int> &ratings) {
         int len=ratings.size();
		vector<int> count(len,0);
		//forward
		count[0]=1;
		for (int i=1;i<len;i++)
{
	if (ratings[i]>ratings[i-1])
{
	count[i]=count[i-1]+1;

}
else
{
	count[i]=1;
}
	

}

//backward
for (int i=len-1;i>0;i--)
{
	if (ratings[i]<ratings[i-1])
{
	if (count[i]>=count[i-1])
	count[i-1]=count[i]+1;

}
}
int ret=0;
for (int i=0;i<len;i++)
ret+=count[i];
return ret;
    }
};

