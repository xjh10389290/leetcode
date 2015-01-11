class Solution {
public:
    int compareVersion(string version1, string version2) {
		string l1v1;
		string l1v2;
		while (true)
		{
			int dotpos_v1=version1.find(".");
			int dotpos_v2=version2.find(".");
			int i_l1v1;
			int i_l1v2;

			if (dotpos_v1!=-1)
			{
				l1v1= version1.substr(0,dotpos_v1);
				version1=version1.substr(dotpos_v1+1,version1.length()-l1v1.length()-1);
				i_l1v1=stoi(l1v1,NULL,0);
			}
			else
			{
				if (version1.length()>0)
				{
					i_l1v1=stoi(version1,NULL,0);
				}
				else
				{					
					i_l1v1=0;
				}
				version1="";

			}
			if (dotpos_v2!=-1)
			{
				l1v2= version2.substr(0,dotpos_v2);
				version2=version2.substr(dotpos_v2+1,version2.length()-l1v2.length()-1);
				i_l1v2=stoi(l1v2,NULL,0);
			}
			else
			{
				if (version2.length()>0)
				{
					i_l1v2=stoi(version2,NULL,0);
				}
				else
				{					
					i_l1v2=0;
				}
				version2="";
			}
			
			if (version2.length()==0&&version1.length()==0&&i_l1v2==0&&i_l1v1==0) return 0;
			if (i_l1v1>i_l1v2) return 1;
			if (i_l1v1<i_l1v2) return -1;
		}

       
    }
};