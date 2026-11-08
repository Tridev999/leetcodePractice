class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        int j = i+1;
        for(;j<n;){
            if(nums[i]!=nums[j]){
                nums[i+1]=nums[j];
                i=i+1;
                j++;
            }
            else{
                j++;
            }
        }
        return i+1;
    }
};