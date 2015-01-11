class Solution {
public:
    string countAndSay(int n) {
        string ans="1";
        int count=1;
        while (count<n)
        {
            string tmp="";
            int num=0;
            int numcount=0;
            for (int index=0;index<ans.length();index++)
            {
                if (num==0)
                {
                    num=ans[index]-'0';
                    numcount=1;
                    continue;
                }
                if (num==(ans[index]-'0'))
                {
                    numcount++;
                }
                else
                {
                    stringstream stream;
                    string int2str;
                    stream<<numcount;
                    stream>>int2str;
                    tmp=tmp+int2str;

					stringstream stream2;
                    stream2<<num;
                    stream2>>int2str;
                    tmp=tmp+int2str;   
                    num=ans[index]-'0';;
                    numcount=1;
                }
            }
            
            if (num!=0)
            {
                    stringstream stream;
                    string int2str;
                    stream<<numcount;
                    stream>>int2str;
                    tmp=tmp+int2str;

					stringstream stream2;
                    stream2<<num;
                    stream2>>int2str;
                    tmp=tmp+int2str;   
                    num=0;
                    numcount=0;
            }
            
            ans=tmp;
            count++;
            
        }
        return ans;
    }
};