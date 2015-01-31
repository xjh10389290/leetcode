class Solution {
public:
    string minWindow(string S, string T) {
        int count=0;
		int tlen=T.length();
		unordered_map<char,int> word;
		int min=INT_MAX;
        int minhead=0,mintail=-1;
		int head=0,tail=-1;
		//init word
		for (int i=0;i<tlen;i++)
		{
			word[T[i]]++;
}
while (1)
{
	if (count<tlen)
	{
		tail++;
		if (tail>=S.length()) break;
		if (word.find(S[tail])!=word.end())
		{
			if (word[S[tail]]>0)count++;
			word[S[tail]]--;
}
continue;
}
if (count==tlen)
{
    if (min>tail-head+1)
    {
        min=tail-head+1;
        minhead=head;
        mintail=tail;
    }
	//min=std::min(min,tail-head+1);
}


if (word.find(S[head])!=word.end())
{
	if (word[S[head]]>=0)count--;
	word[S[head]]++;
}
head++;
}
    if (mintail>=0)
        return S.substr(minhead,mintail-minhead+1);
    else
        return "";
    }
};

