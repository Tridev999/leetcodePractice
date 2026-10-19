class Solution {
public:
    vector<vector<int>> result;
    void solve(vector<int>& nums,vector<int>& temp,int i){
        if(i>=nums.size()){
            result.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        solve(nums,temp,i+1);
        temp.pop_back();
        solve(nums,temp,i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<int> temp;
        int i=0;
        solve(nums,temp,i);
        for(int i=0;i<result.size();i++){
            sort(result[i].begin(),result[i].end());
        }
        set<vector<int>> st(result.begin(),result.end());
        vector<vector<int>> vec(st.begin(),st.end());
        return vec;
    }
};