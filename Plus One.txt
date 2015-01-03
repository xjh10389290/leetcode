class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        
        
        int n=digits.size();
        n--;
        while (n>=0)
        {
            digits[n]++;
            if (digits[n]<=9) break;
            if (digits[n]>9&&n!=0)
            {
                digits[n]=0;
                
                
            }
            
            n--;
        }
        if (digits[0]==10)
        {
            digits.push_back(1);
            digits[0]=0;
           for (int i=digits.size();i>0;i--)
           digits[i]=digits[i-1];
           digits[0]=1;
        }
        return digits;
    }
};