class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(const auto& [key,val]:mpp){
            if(val>=2){
                return key;
            }
        }
        return -1;
    }
};