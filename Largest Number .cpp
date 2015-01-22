class Solution {
public:

	struct comp
	{
		bool operator()(string &a,string &b)
		{
			return a+b<b+a;
		}
	}cmp;


	int static max(int a,int b)
	{
		return (a>b)?a:b;
	}
    string largestNumber(vector<int> &num) {
        vector<string> str;
        stringstream sstream;
        string ans;
        for (int i=0;i<num.size();i++)
        {
            sstream.str("");
            sstream<<num[i];
            str.push_back(sstream.str());
        }
        sort(str.begin(),str.end(),cmp);
        for (int i=str.size()-1;i>=0;i--)
            ans+=str[i];
        while (ans[0]=='0'&&ans.length()>1)
        ans.erase(0,1);
        return ans;
    }
};