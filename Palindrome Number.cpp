class Solution {
public:
    bool isPalindrome(int x) {
        if (x==0) return true;
        if (x<0||x%10==0) return false;
        int xx=x,y=0;
        while (xx>9)
        {
            y+=xx%10;
            y*=10;
            xx=xx/10;
        }
        y+=xx;
        return y==x;
    }
};