class Solution {
public:
    int count = 0;
    void solve(vector<int>& nums,int i,int mx,int result){
        if(i==nums.size()){
            if(mx == result){
                count++;
            }
            return;
        }
        solve(nums,i+1,mx,result|nums[i]);
        solve(nums,i+1,mx,result);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int mx=0;
        int result = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mx |= nums[i];
        }
        solve(nums,0,mx,result);
        return count;
    }
};