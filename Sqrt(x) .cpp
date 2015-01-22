class Solution {
public:
    int sqrt(int x) {
     
     if (x<1)
     {
         return (int)getsqrt(0,1,x);
     }
     
     if (x==1) return 1;
     
     if (x>1)
     {
        return (int)getsqrt(1,x,x);  
     }
     
    }
    double getsqrt(double f,double l,double x)
    {
        if (fabs(f-l)<10e-7)
        {
            return l;
        }
        double mid=(f+l)/2;
        
        if (mid*mid>x) return getsqrt(f,mid,x);
        else return getsqrt(mid,l,x);
        
    }
};