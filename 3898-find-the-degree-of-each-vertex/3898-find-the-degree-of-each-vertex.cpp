class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> vec;
        for(int i=0;i<matrix.size();i++){
            int s=0;
            for(int j=0;j<matrix[i].size();j++){
                s=s+matrix[i][j];
            }
            vec.push_back(s);
        }
        return vec;
    }
};