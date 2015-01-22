class Solution {
public:
    int maxArea(vector<int> &h) {
        int i=0;
        int j=h.size()-1;
        int mx=0;
        while (i<j)
        {
            mx=max(mx,(j-i)*min(h[i],h[j]));
            if (h[i]>h[j])
            j--;
            else
            i++;
        }
        return mx;
    }
};