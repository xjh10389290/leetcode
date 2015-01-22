class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans;
		for (int i=0;i<n;i++)
		{
			vector<int> tmp(n,0);
			ans.push_back(tmp);
		}

		int cir=1;
		int num=1;
		while (cir<=(n/2+n%2))
		{
			int cor_l,cor_r;
			cor_l=cir-1;
			cor_r=n-cir;
			//
			for (int i=cor_l;i<=cor_r;i++)
				ans[cir-1][i]=num++;
			//
			num--;
			for (int j=cir-1;j<=n-cir;j++)
				ans[j][cor_r]=num++;
			//
			num--;
			for (int i=cor_r;i>=cor_l;i--)
				ans[n-cir][i]=num++;
			//
			num--;
			for (int j=n-cir;j>=cir;j--)
				ans[j][cor_l]=num++;
			cir++;
		}
		return ans;
    }
};