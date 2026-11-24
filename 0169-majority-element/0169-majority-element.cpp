class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        int mx = 0;
        int k = 0;
        for(const auto& [key,val]:mpp){
            if(val>mx){
                mx=val;
                k=key;
            }
        }
        return k;
    }
};