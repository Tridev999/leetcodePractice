class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        vector<int> vec;
        int n = nums.size();
        int min1 = INT_MAX;
        for(int i=0;i<n;i++){
            vector<int> ans;
            int c = 0;
            int sum = 0;
            for(int j=i;j<n;j++){
                c++;
                sum+=nums[j];
                if(c>=l && c<=r){
                    if(sum>0){
                        min1 = min(sum,min1);
                    }
                }
            }
        }
        if(min1==INT_MAX){
            return -1;
        }
        return min1;
    }
};