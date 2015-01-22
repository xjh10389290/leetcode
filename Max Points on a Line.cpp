/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */
class Solution {
public:
    int getgcd(int a,int b)
    {

        if (b==0) return a;
        return getgcd(b,a%b);
    }
    
    int max(int a,int b)
    {
        return (a>b)?a:b;
    }
    
    int maxPoints(vector<Point> &points) {
        
        if (points.size()<3) return points.size();
       
        int ver;
        int overlap;
        int localsum;
        int maxvalue=0;
        for (int i=0;i<points.size();i++)
        {
            ver=0;
            overlap=1;
            localsum=0;
             map<pair<int,int>,int>line;
            for (int j=i+1;j<points.size();j++)
            {
                if (points[i].x==points[j].x&&points[i].y==points[j].y)
                {
                    overlap++;
                    //maxvalue=max(maxvalue,overlap);
                    continue;
                }
                
                if (points[i].x==points[j].x)
                {
                    ver++;
                    //maxvalue=max(maxvalue,ver);
                    continue;
                }
                

                    int a=points[j].x-points[i].x;
                    int b=points[j].y-points[i].y;
                    int c=getgcd(a,b);
                    a/=c;
                    b/=c;
                    line[make_pair(a,b)]++;   
                    localsum=max(localsum,line[make_pair(a,b)]);
                

            }
            maxvalue=max(maxvalue,overlap+ver);
            maxvalue=max(maxvalue,overlap+localsum);
        }
        
        return maxvalue;
    }
};