
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j=0,n=matrix[0].size(),m=matrix.size();
        while(i<m && j<n){
            if(matrix[i][j]==target)
                return 1;  // mil gaya
            if(i+1!=m && matrix[i+1][j]<=target){
                i++;  //niche jao phele dekho kahi next row ka value toh chota ya equal nhi h target ke
            }else if(j+1!=n && matrix[i][j+1]<=target){
                j++;  // next row me nhi h same row me hi ho sakta h
            }else
                return false;  // kahi nhi h :(
        }
        return 0;
    }
};


// using c++ stl
class Solution {
public:
    double myPow(double x, int n) {
        return pow(x,n);
    }
};
