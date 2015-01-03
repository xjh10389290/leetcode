class Solution {
public:
    string addBinary(string a, string b) 
    {
        if (a.length()<b.length())
        return addBinary(b,a);
        //asume len(a)>=len(b)
        int j=b.length()-1;
        string ans="";
        int carry=0;
        for (int i=a.length()-1;i>=0;i--)
        {
            int bita=a[i]-'0';
			int bitb;
            if (j>=0)
				bitb=b[j]-'0';
			else
				bitb=0;
			j--;
            if (bita&bitb==1)
            {
				if (carry==1)
				{
					ans.insert(0,"1");
				
				}
				else
				{
					ans.insert(0,"0");
					carry=1;
					
				}
                
                
            }
            else if (bita|bitb==1)
            {
                if(carry==1)
                {
                    ans.insert(0,"0");
                }
                else
                {
                    ans.insert(0,"1");
                }
            }
            else
            {
                if (carry==1)
                {
                    ans.insert(0,"1");
                    carry=0;
                }
                else
                {
                    ans.insert(0,"0");
                   
                }
            }
            

        }
		if (carry==1)
        return "1"+ans;
		return ans;
    }
};