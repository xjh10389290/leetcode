class Solution {
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        
        int len =gas.size();
        vector<int> gaschange(gas.size()*2,0);
        
        for (int i=0;i<gas.size();i++)
        {
            gaschange[i]=gas[i]-cost[i];
            gaschange[len+i]=gaschange[i];
            
        }
        //最长连续和
        int T[2*len],F[2*len];
        F[0]=gaschange[0];
        T[0]=1;
        int max=F[0];
        int pos=0;
        for (int i=1;i<len*2-1;i++)
        {
            if (F[i-1]>0)
            {
                F[i]=F[i-1]+gaschange[i];
                T[i]=T[i-1]+1;
            }
            else
            {
                F[i]=gaschange[i];
                T[i]=1;
            }
            
            if (max<F[i])
            {
                max=F[i];
                pos=i;
            }
        }
        if (max<0) return -1;
        for (int i=pos+1;i<=pos+len-T[pos];i++)
        {


                max+=gaschange[i];
                
                if (max<0) break;
                
          

        }
        //
         if (max>=0)
            return (pos+1-T[pos])%len;
       return -1; 
    }
};