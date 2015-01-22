class Solution {
public:
    
    int findPeakElement(const vector<int> &num) {
 
        int f=1,l=num.size()-1,mid;
        int fvalue,lvalue,midvalue;
        while (true)
        {
            
            mid=(f+l)/2;
            fvalue=(num[f]-num[f-1]);
            lvalue=(num[l]-num[l-1]);
            midvalue=(num[mid]-num[mid-1]);
            
            if (fvalue<0) return f-1;
            if (lvalue>0) return l;
            if (midvalue>0)
            {
                f=mid;
            }
            else
            {
                l=mid;
            }
            
            if (f+1==l)
            {
                if (num[f]>num[l]) return f;else return l;
            }
            
        }
    }
    

};