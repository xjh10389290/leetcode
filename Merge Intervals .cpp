/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    static int  cmp(const Interval & a, const Interval& b)
    {
        return a.start<b.start;
    }
    vector<Interval> merge(vector<Interval> &intervals) {
        
        int count=1;
        vector<Interval> allans;
        if (intervals.size()==0) return allans;
        sort(intervals.begin(),intervals.end(),cmp);
        
    Interval tmp(intervals[0].start,intervals[0].end);
    for (int i=1;i<intervals.size();i++)
    {
        if (intervals[i].start<=tmp.end)
            tmp.end=std::max(tmp.end,intervals[i].end);
        else
        {
            count++;
            allans.push_back(tmp);
            tmp.start=intervals[i].start;
            tmp.end=intervals[i].end;
        }
    }
    if (count!=allans.size())
        allans.push_back(tmp);
    
    return allans;
    }
};