class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        vector<int> ans(n);
        prefix[0]=nums[0];
        suffix[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            prefix[i]+=prefix[i-1]+nums[i];
        }
        for(int i=n-1;i>0;i--){
            suffix[i-1]+=suffix[i]+nums[i-1];
        }
        for(int i=0;i<n;i++){
            prefix[i]-=nums[i];
            suffix[i]-=nums[i];
            ans[i]=abs(prefix[i]-suffix[i]);
        }
        return ans;
    }
};