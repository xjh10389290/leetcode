class Solution {
public:
    int findMin(vector<int> &num) {
        return search(num,0,num.size()-1);
    }
    
    int search(vector<int> &num,int f,int l)
    {
        if(f+1>=l)
        {
          if (num[f]>num[l]) return num[l]; else return num[f];
        }
        
        int mid=(f+l)/2;
        
        if (num[f]<num[l])
        {
             search(num,f,mid);
        }
        
        else
        {
            if (num[mid]>num[f])  search(num,mid+1,l);
            else search(num,f+1,mid);
        }
    }
};