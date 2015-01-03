class Solution {
public:
    double pow(double x, int n) {
        int pos=1;
        if (n%2==1&&x<0) pos=-1;
       if (n>0) return pos*pospow(abs(x),n);
       if (n==0) return 1;
       return pos*1/pospow(abs(x),-n);
    }
    double pospow(double x,int n){
       if ((n==1)||fabs(x-1)<1e-10) return x;
       if (n==0) return  1;
       double ans1=pospow(x,n/2);
       if ((ans1)<1e-10) return 0;
       double ans2=pospow(x,n-n/2);
       if (((ans2)<1e-10)) return 0;
       return ans1*ans2;
    }
};