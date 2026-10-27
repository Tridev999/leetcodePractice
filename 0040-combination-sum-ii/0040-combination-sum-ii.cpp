class Solution {
public:
    vector<vector<int>> result;
    void solve(vector<int>& candidates, int target,vector<int>& temp,int idx){
        if(target==0){
            result.push_back(temp);
            return;
        }
        if(target<0){
            return;
        }
        for(int i=idx;i<candidates.size();i++){
            if(i>idx && candidates[i]==candidates[i-1]){
                continue;
            }
                temp.push_back(candidates[i]);
                solve(candidates,target-candidates[i],temp,i+1);
                temp.pop_back();
            }
        }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        int idx = 0;
        solve(candidates,target,temp,idx);
        return result;
    }
};