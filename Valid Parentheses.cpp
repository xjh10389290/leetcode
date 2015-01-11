class Solution {
public:
    bool isValid(string s) {
        stack<int> sta;
        for (int i=0;i<s.length();i++)
        {
            int top2,top1;
            if (sta.size()>0) top2=sta.top();
            if (s[i]=='(') sta.push(1);
            if (s[i]==')') sta.push(-1);            
            if (s[i]=='[') sta.push(2);            
            if (s[i]==']') sta.push(-2);            
            if (s[i]=='{') sta.push(3);            
            if (s[i]=='}') sta.push(-3);  
            
            if ((sta.size()>1))
            {
                int top1=sta.top();
                if (top1+top2==0)
                {
                    sta.pop();
                    sta.pop();
                }
            }
        }
        
        if (sta.size()==0)
        return true;
        else
        return false;
    }
};