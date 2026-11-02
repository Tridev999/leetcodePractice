class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 0;
        int val = nums[nums.size()/2];
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                continue;
            }
            count+=abs(nums[i]-val);
        }
        return count;
    }
};