class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int max1 = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                mpp[nums[i]]++;
                max1 = max(nums[i],max1);
            }
        }
        for(int i=1;i<max1;i++){
            if(mpp.find(i)==mpp.end()){
                return i;
            }
        }
        if(max1<0){
            return 1;
        }
        return max1+1;

    }
};