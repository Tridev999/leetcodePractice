class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        nums.insert(nums.end(),nums.begin(),nums.end());
        int temp = nums.size();
        int max1 = 0;
        int cnt = 1;
        for(int i=0;i<temp-1;i++){
            if(nums[i]<=nums[i+1]){
                cnt++;
                max1 = max(max1,cnt);
                if(max1>=n){
                    return true;
                }
            }
            else{
                cnt = 1;
            }
        }
        return false;
    }
};