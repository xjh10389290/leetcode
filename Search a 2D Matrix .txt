class Solution {
public:
int rows;
int cols;
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        cols=matrix[0].size();
        rows=matrix.size();
        for (int i=0;i<rows&&matrix[i][0]<=target;i++)
        {
            if (searchMatrix(matrix[i],0,cols-1,target))
            return true;
        }
        return false;
    }
    
    bool searchMatrix(vector<int> &row,int f,int l, int target) {
        if (f+1>=l) 
        {
            if (row[f]==target) return true;
            if (row[l]==target) return true;
            return false;
        }
        int mid=(f+l)/2;
        if (row[mid]==target) return true;
        if (row[mid]>target)  return searchMatrix(row,f,mid,target);
        if (row[mid]<target)  return searchMatrix(row,mid,l,target);
        
    }
};