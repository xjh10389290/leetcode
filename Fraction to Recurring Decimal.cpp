class Solution {
public:
    string fractionToDecimal(int64_t  n, int64_t  d) {
        unordered_map<int,int> map;
        string ans;
        if (n==0) return "0";
        if ((n>0)^(d>0)) ans+='-';
        n=abs(n);
        d=abs(d);
        ans+=to_string(n/d);
        
        if (n % d == 0) return ans;

        ans += '.';
    
        for (int64_t  r=n%d;r;r=r%d)
        {
            
            if (map.count(r)>0)
            {
                ans.insert(map[r],1,'(');
                ans+=')';
                break;
            }
            
            map[r]=ans.length();
            r*=10;
            ans+=to_string(r/d);
            
        }
        return ans;
        
    }
};