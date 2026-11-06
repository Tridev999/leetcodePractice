class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> vis(nums.size());
        for(int i=0;i<nums.size();i++){
            vis[i]=nums[nums[i]];
        }
        return vis;
    }
};