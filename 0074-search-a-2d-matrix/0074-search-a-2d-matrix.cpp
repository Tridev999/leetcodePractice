class Solution {
public:
    bool bs(vector<vector<int>>& matrix, int t, int row,int col){
        int l = 0;
        int h = (row*col)-1;
        while(l<=h){
            int mid = (l+h)/2;
            int val = matrix[mid/col][mid%col];
            if(val==t){
                return true;
            }
            else if(val>t){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        if(bs(matrix,target,m,n)){
            return true;
        }
        return false;
    }
};