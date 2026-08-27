class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
          map<int,int> mpp;
          for(auto x:edges){
             mpp[x[0]]++;
             mpp[x[1]]++;
          }
          int center = 0;
          int max1 = 0;
          for(auto x:mpp){
            if(x.second>max1){
                max1 = x.second;
                center = x.first;
            }
          }
          return center;
    }
};