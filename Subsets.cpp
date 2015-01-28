class Solution {
public:
     vector<vector<int>> ans;
    vector<vector<int>> subsets(vector<int> &s) {
        vector<int> empty;
        sort(s.begin(),s.end());
        ans.push_back(empty);
        int head=0,tail=0;
        int count=1;
        while (count>0)
        {
            count=0;
            for (int j=0;j<s.size();j++)
            {
                for (int i=head;i<=tail;i++)
                if (ans[i].empty()||ans[i].back()<s[j])
                {
                    count++;
                    vector<int> tmp=ans[i];
                    tmp.push_back(s[j]);
                    ans.push_back(tmp);
                }

            }
            tail=ans.size()-1;
            head=tail-count+1;
        }
        return ans;
    }
};