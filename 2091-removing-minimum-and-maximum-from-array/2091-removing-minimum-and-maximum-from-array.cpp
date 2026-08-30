class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mx=INT_MIN;
        int mn=INT_MAX;
        int mxi = 0;
        int mni = 0;
        for(int i=0;i<nums.size();i++){
            if(mx<nums[i]){
                mx=nums[i];
                mxi=i;
            }
            if(mn>nums[i]){
                mn=nums[i];
                mni=i;
            }
        }
        int l=min(mni, mxi);
        int r=max(mni,mxi);
        int n = nums.size();
        return min({r+1,n-l,(l+1)+(n-r)});
    }
};