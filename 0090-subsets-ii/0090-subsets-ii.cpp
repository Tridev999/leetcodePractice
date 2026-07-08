class Solution {
public:
    vector<vector<int>> arr;
    set<vector<int>> result;
    void csum(vector<int>& candidates,int idx,vector<int> curr){
        if(idx==candidates.size()){
            int s=0;
            int sz=result.size();
            vector<int> res;
            for(int i=0;i<curr.size();i++){
                s=s+curr[i];
                res.push_back(curr[i]);
            }
                result.insert(res);
                if(sz!=result.size()){
                    arr.push_back(res);
                }
            return;
            }
        csum(candidates,idx+1,curr);
        curr.push_back(candidates[idx]);
        csum(candidates,idx+1,curr);
        curr.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> curr;
        int idx=0;
        csum(nums,idx,curr);
        return arr;
    }
};