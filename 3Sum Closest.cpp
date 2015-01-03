class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        sort(num.begin(),num.end());
        int absans=abs(num[0]+num[1]+num[2]-target);
        int actans=num[0]+num[1]+num[2];
        int i1,i2,i3;
        for (int i1=1;i1<num.size()-1;i1++)
        {
            i2=0;
            i3=num.size()-1;
            while (i1!=i2&&i2!=i3&&i1!=i3)
            {

                     int ans=num[i1]+num[i2]+num[i3];

                     
                     
                     if (absans>abs(ans-target))
                     {
                         absans=abs(ans-target);
                         actans=ans;
                     }
                     
                     if (ans==target)
                     {
                         return actans;
                     }
                     
                     
                     if (ans>target)
                     {
                       i3--;
                     }
                     
                     if (ans<target)
                     {
                       i2++;
                     }
               
            }
        }
        return actans;
    }
};