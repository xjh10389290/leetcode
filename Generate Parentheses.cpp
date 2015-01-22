class Solution {
public:
    int parnum;
    vector<string> ans;
    vector<string> generateParenthesis(int n) {
        parnum=n<<1;
        gen("");
        return ans;
        
    }
    
    void gen(string str)
    {
        int lef=0;
        int rig=0;
        int sum=0;
        int haf=parnum>>1;
        for (int i=0;i<str.length();i++)
        {
            if (str[i]=='(')
            {
                lef++;
                sum++;
            }
            else
            {
                rig++;
                sum--;
            }
            
            if (lef>haf||rig>haf||sum<0)
            return ;
        }
        
        if (str.length()==parnum)
        {
            ans.push_back(str);
            return;
        }
        
        gen(str+"(");
         gen(str+")");
    }
};