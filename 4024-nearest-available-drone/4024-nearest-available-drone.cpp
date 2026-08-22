class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        map<int,int> mpp;
        for(int i=0;i<drones.size();i++){
            int manhatten = abs(drones[i][0]-target[0]) + abs(drones[i][1]-target[1]);
            if(manhatten<=drones[i][2]){
                mpp[i]=manhatten;
            }
        }
        int min1 = INT_MAX;
        int ans =-1;
        int prevmin = 0;
        for(const auto& [key,value]:mpp){
            if(min1>value){
                ans=key;
            }
            min1 = min(min1,value);
        }
        if(min1==INT_MAX){
            return -1;
        }
        return ans;
    }
};