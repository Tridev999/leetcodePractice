class Solution {
public:
    vector<vector<int>> result;
    void solve(vector<int>& candidates,int target,vector<int>& temp,int idx){
        if(target==0){
            result.push_back(temp);
            return;
        }
        if(target<0){
            return;
        }
        for(int i=idx;i<candidates.size();i++){
            if(target>=candidates[i]){
                temp.push_back(candidates[i]);
                solve(candidates,target-candidates[i],temp,i);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int i = 0;
        vector<int> temp;
        solve(candidates,target,temp,i);
        return result;
    }
};