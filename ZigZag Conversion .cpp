class Solution {
public:
    string convert(string s, int nRows) {
         if (nRows<=1) return s;
        string rows[nRows];
        int row=0;
        int step=1;
        for (int i=0;i<s.length();i++)
        {
           rows[row].push_back(s[i]);

        if (row == 0)
            step = 1;
        else if (row == nRows - 1)
            step = -1;

        row += step;
        }
        
        s.clear();
        for (int i=0;i<nRows;i++)
        s=s+rows[i];
        return s;
    }
};