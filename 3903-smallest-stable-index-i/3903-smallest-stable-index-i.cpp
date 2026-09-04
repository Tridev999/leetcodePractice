class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> pmax;
        vector<int> pmin(nums.size());
        int max1 = nums[0];
        pmax.push_back(max1);
        for(int i=1;i<nums.size();i++){
            max1=max(max1,nums[i]);
            pmax.push_back(max1);
        }
        int min1 = nums[nums.size()-1];
        pmin[nums.size()-1] = min1;
        for(int i=nums.size()-2;i>=0;i--){
            min1=min(min1,nums[i]);
            pmin[i]=min1;
        }
        for(int i=0;i<nums.size();i++){
            int check = pmax[i] - pmin[i];
            if(check<=k){
                return i;
            }
        }
        return -1;
    }
};