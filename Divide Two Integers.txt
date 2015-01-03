class Solution {
public:
    int divide(int64_t dividend, int64_t divisor) {
        int64_t ans=0;
        int64_t sig=1;
        int64_t dd=dividend,dr=divisor;
       
        if (divisor==0) return -1;
        if (dd<0)
        {
            dd=0-dd;
            sig=-sig;
        }
          
         if (dr<0)
          {
              sig=-sig;
              dr=0-dr;
          }
       
        while (dd>=dr)
        {
            int64_t tmp=dr;
            int64_t num=1;
            while (dd>=tmp)
            {
                ans+=num;
                dd-=tmp;
                num=num+num;
                tmp=tmp+tmp;
            }
            
            
        }
       // if ((dividend==-2147483648)&&(divisor==-1)) return 2147483647;
        
        return ans*sig;
    }
};