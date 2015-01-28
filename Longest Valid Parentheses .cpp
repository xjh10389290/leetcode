class Solution {
public:
    int longestValidParentheses(string str) {
    stack<int> s;
    for (int i=0;i<str.length();i++)
    {
        int value;
        if (str[i]=='(') value=-1; else value=-2; 
        if (s.empty())
        {
            s.push(value);
            continue;
        }
        int sum=0;
        while (!s.empty()&&s.top()>0)
        {
            sum+=s.top();
            s.pop();
        }  
        
        
        if (!s.empty()&&s.top()==-1&&value==-2)
        {
            s.pop();
            sum++;
            while (!s.empty()&&s.top()>0)
            {
                sum+=s.top();
                s.pop();
            }
            s.push(sum);
            continue;
        }
 		if (sum>0)
			s.push(sum);
        s.push(value);
    }
    int max=0;
    while (!s.empty())
    {
        max=std::max(max,s.top());
        s.pop();
    }
    return max<<1;
    }
    
};