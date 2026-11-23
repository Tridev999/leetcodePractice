class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        vector<int> prefix(n,0);
        vector<int> suffix(n,0);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=nums[i]*prefix[i-1];
        }
        suffix[n-1] = nums[n-1];
        for(int j=n-2;j>=0;j--){
            suffix[j]=nums[j]*suffix[j+1];
        }
        for(int i=0;i<n;i++){
            if(i==0){
                ans[i]=suffix[i+1];
            }
            else if(i==n-1){
                ans[i]=prefix[i-1];
            }
            else{
                ans[i]=prefix[i-1]*suffix[i+1];
            }
        }
        return ans;
    }
};