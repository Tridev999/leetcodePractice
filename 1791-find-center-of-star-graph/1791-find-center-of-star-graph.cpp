class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int temp1 = edges[0][0];
        int temp2 = edges[0][1];
        if(temp1==edges[1][0] || temp1==edges[1][1]){
            return temp1;
        }
        return temp2;
    }
};