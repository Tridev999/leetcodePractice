class Solution {
public:
    vector<vector<int>> result;
    void sub(vector<int>& nums,int idx,vector<int> curr){
        if(idx==nums.size()){
            vector<int> st;
            for(int i=0;i<curr.size();i++){
                  st.push_back(curr[i]);
            }
            result.push_back(st);
            return;
        }
        sub(nums,idx+1,curr); // first we do not include element
        curr.push_back(nums[idx]);
        sub(nums,idx+1,curr); // we include the element in it
        curr.pop_back(); // used for backtracking
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr;
        int idx=0;
        sub(nums,idx,curr);
        return result;
    }
};