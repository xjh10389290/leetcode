class Solution {
public:
    int evalRPN(vector<string> &tokens) {
        stack<int> s;
        for (int i=0;i<tokens.size();i++)
        {
            if (tokens[i]=="+")
            {
                int a=s.top();s.pop();
                int b=s.top();s.pop();
                s.push(a+b);
                continue;
            }
            if (tokens[i]=="-")
            {
                int a=s.top();s.pop();
                int b=s.top();s.pop();
                s.push(b-a);    
                continue;          
            }
            if (tokens[i]=="*")
            {
                int a=s.top();s.pop();
                int b=s.top();s.pop();
                s.push(a*b);   
                continue;          
            }
            if (tokens[i]=="/")
            {
                int a=s.top();s.pop();
                int b=s.top();s.pop();
                s.push(b/a);
                continue;
            }
            int t;
            stringstream sstream;
            sstream<<tokens[i];
            sstream>>t;
            s.push(t);
        }
        return s.top();
    }
};