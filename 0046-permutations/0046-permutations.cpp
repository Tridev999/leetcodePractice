class Solution {
public:
    vector<vector<int>> result;
    unordered_set<int> st;
    void solve(vector<int>& nums,vector<int>& curr){
        if(curr.size()==nums.size()){
            result.push_back(curr);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i])==st.end()){
                st.insert(nums[i]);
                curr.push_back(nums[i]);
                solve(nums,curr);
                curr.pop_back();
                st.erase(nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int i = 0;
        vector<int> curr;
        solve(nums,curr);
        return result;
    }
};