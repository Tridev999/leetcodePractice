class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int> mpp;
        vector<int> vec;
        sort(nums.begin(),nums.end());
        int min = 1;
        int max =nums.size();
        for(int i=min;i<=max;i++){
            mpp[i]=0;
        }
        for(auto x:nums){
            mpp[x]++;
        }
        for(const auto&[key,val]:mpp){
            if(val==0){
                vec.push_back(key);
            }
        }
        return vec;
    }
};