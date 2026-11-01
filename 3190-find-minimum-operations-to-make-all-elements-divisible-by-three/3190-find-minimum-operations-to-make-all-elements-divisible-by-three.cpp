class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum+=min(nums[i]%3,3-(nums[i]%3));
        }
        return sum;
    }
};