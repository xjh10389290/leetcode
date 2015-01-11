class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > ans;
        for (int i=1;i<=numRows;i++)
        {
            vector<int> row;
            if (i==1)
            {
                row.push_back(1);
                ans.push_back(row);
                continue;
            }
            row.push_back(1);
            if (i>2)
            {
                for (int j=1;j<ans[i-2].size();j++)
                {
                    row.push_back(ans[i-2][j]+ans[i-2][j-1]);
                }
            }
            row.push_back(1);
            ans.push_back(row);
        }
        
        return ans;
    }
};