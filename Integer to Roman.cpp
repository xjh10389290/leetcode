class Solution {
public:
    string intToRoman(int num) {
        int val[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string rom[14]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ans="";
        int i=0;
        while (num>0)
        {
            while(num>=val[i])
            {
                num-=val[i];
                ans+=rom[i];
            }
            i++;
        }
        
        return ans;
    }
};