class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max1 = INT_MIN;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(max1<nums[i]){
                max1 = nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            count+=max1-nums[i];
        }
        return count;
    }
};