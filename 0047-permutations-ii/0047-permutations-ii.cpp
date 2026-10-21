class Solution {
public:
    vector<vector<int>> result;
    int n;
    void solve(unordered_map<int,int> mpp,vector<int>& temp){
        if(temp.size()==n){
            result.push_back(temp);
            return;
        }
        for(const auto& [key,val]:mpp){
            if(mpp[key]!=0){
                mpp[key]--;
                temp.push_back(key);
                solve(mpp,temp);
                temp.pop_back();
                mpp[key]++;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        n = nums.size();
        vector<int> temp;
        unordered_map<int,int> mpp;
        for(int x:nums){
            mpp[x]++;
        }
        solve(mpp,temp);
        return result;
    }
};