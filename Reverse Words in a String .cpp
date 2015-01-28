class Solution {
public:
    void reverseWords(string &s) {
        if (s.length()==0) return ;
        int pos;
        string s_copy=s;
        string ans;
		pos=s_copy.find_first_of(' ');
        while (pos>=0)
        {
           
            if (pos>0)ans=s_copy.substr(0,pos)+" "+ans;
            s_copy.erase(0,pos+1);
			pos=s_copy.find_first_of(' ');
            
        }
		if (s_copy.length()!=0)
			ans=s_copy+" "+ans;
		if (ans[ans.length()-1]==' ')
		    ans.erase(ans.length()-1,1);
        s=ans;
    }
}; 