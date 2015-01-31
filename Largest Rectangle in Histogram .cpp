class Solution {
public:
    int largestRectangleArea(vector<int> &height) {
        if (height.size()==0) return 0;
        stack<int> s;
		int max=0;
		for (int i=0;i<height.size();i++)
{
	if (!s.empty())
{
	while(!s.empty()&&height[s.top()]>height[i])
{
    int top=s.top();
	
	s.pop();
	int rec;
	if (s.empty())
	    rec=height[top]*i;
	   else
	 rec=(i-s.top()-1)*height[top];
	max=(max>rec)?max:rec;
    
}
}
	s.push(i);
}
int top=s.top();
int buttom;
while(!s.empty())
{
   int h=s.top();
    int rec;
    s.pop();
    if (s.empty()!=true)
rec=(top-s.top())*height[h];
else
    rec=height[h]*height.size();
max=(max>rec)?max:rec;
	
}
    return max;
    }
};


