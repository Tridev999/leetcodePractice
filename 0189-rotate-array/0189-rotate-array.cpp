class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int st = 0;
        if(k>=n){
            k=k%n;
        }
        reverse(nums.begin(),nums.end());
        for(int i=0,j=k-1;i<j;i++,j--){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
        for(int i=k,j=nums.size()-1;i<j;i++,j--){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
        
    }
};