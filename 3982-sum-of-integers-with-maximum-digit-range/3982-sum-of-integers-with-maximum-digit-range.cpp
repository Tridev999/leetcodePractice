class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int i=0;
        map<int,int> ans;
        for(int i=0;i<nums.size();i++){
            int max1 = 0;
            int min1 = INT_MAX;
            int r=0;
            int n = nums[i];
            while(n!=0){
                r=n%10;
                max1=max(max1,r);
                min1=min(min1,r);
                n=n/10;
            }
            ans[max1-min1]+=nums[i];
        }
        return ans.rbegin()->second; 
    }
};
