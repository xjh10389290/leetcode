class Solution {
public:
    int num;
    vector<int> grayCode(int n) {
        vector<int> ans;
        num=n;
        for (int i=0;i<(1<<n);i++)
            ans.push_back(bit2GC(i));
        return ans;
    }
    
    int bit2GC(int bit)
    {
        int GC=0;
        bool bit1;
        bool bit2;
        bit1=bit&1;
        bit=bit>>1;
        bit2=bit&1;
        GC=(bit1^bit2);
        for (int i=1;i<num;i++)
        {
 
            bit1=bit2;
            bit=bit>>1;
            bit2=bit&1;
            
            GC+=((bit1^bit2)<<i);           
        }
        
        return GC;
        
    }
    

};