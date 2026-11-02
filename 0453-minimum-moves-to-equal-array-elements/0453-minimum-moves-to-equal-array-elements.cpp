class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count = 0;
        int val = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(val>nums[i]){
                val=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(val==nums[i]){
                continue;
            }
            count+=nums[i]-val;
        }
        return count;
    }
};