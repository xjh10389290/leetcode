class Solution {
public:
    vector<string> letterCombinations(string d) {
        deque<string> allans;
		allans.push_back("");
        vector<vector<string>> mm;
		string stmp0[]={"a","b","c"};
		vector<string> tmp0(stmp0,stmp0+3);
		mm.push_back(tmp0);
		string stmp1[]={"a","b","c"};
		vector<string> tmp1(stmp1,stmp1+3);
		mm.push_back(tmp1);
		string stmp2[]={"a","b","c"};
		vector<string> tmp2(stmp2,stmp2+3);
		mm.push_back(tmp2);
		string stmp3[]={"d","e","f"};
		vector<string> tmp3(stmp3,stmp3+3);
		mm.push_back(tmp3);
		string stmp4[]={"g","h","i"};
		vector<string> tmp4(stmp4,stmp4+3);
		mm.push_back(tmp4);
		string stmp5[]={"j","k","l"};
		vector<string> tmp5(stmp5,stmp5+3);
		mm.push_back(tmp5);
		string stmp6[]={"m","n","o"};
		vector<string> tmp6(stmp6,stmp6+3);
		mm.push_back(tmp6);
		string stmp7[]={"p","q","r","s"};
		vector<string> tmp7(stmp7,stmp7+4);
		mm.push_back(tmp7);
		string stmp8[]={"t","u","v"};
		vector<string> tmp8(stmp8,stmp8+3);
		mm.push_back(tmp8);
		string stmp9[]={"w","x","y","z"};
		vector<string> tmp9(stmp9,stmp9+4);
		mm.push_back(tmp9);

        for (int i=0;i<d.length();i++)
        {
            if (d[i]>='2'&&d[i]<='9')
            {
                int len=allans.size();
                for (int j=0;j<mm[d[i]-'0'].size();j++)
                {
                    string tmp=mm[d[i]-'0'][j];
                    
                    for (int k=0;k<len;k++)
                    {
						string str(allans[k]);
						str+=tmp;
						allans.push_back(str);
                    }
                }
                
                for(int k=0;k<len;k++)
                allans.pop_front();
            }
        }
        vector<string> allansv;
        for (int i=0;i<allans.size();i++)
            allansv.push_back(allans[i]);
        return allansv;

    }
};