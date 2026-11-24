class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double mavg = INT_MIN;
        double sum = 0;
        int n = nums.size();
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        mavg = max(sum/k,mavg);
        for(int i=k;i<n;i++){
            sum=sum+nums[i]-nums[i-k];
            mavg=max(sum/k,mavg);
        }
        return mavg;
    }
};