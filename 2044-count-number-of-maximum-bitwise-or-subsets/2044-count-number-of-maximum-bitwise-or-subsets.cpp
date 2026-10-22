class Solution {
public:
    int cnt = 0;
    int n=0;
    void solve(vector<int>& nums,vector<int>& temp,int i,int mx){
        if(i>=n){
            int result = 0;
            for(int i=0;i<temp.size();i++){
                result = result|temp[i];
            }
            if(result==mx){
                cnt+=1;
            }
            return;
        }
        temp.push_back(nums[i]);
        solve(nums,temp,i+1,mx);
        temp.pop_back();
        solve(nums,temp,i+1,mx);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        n=nums.size();
        int mx=0;
        for(int i=0;i<n;i++){
            mx |= nums[i];
        }
        vector<int> temp;
        solve(nums,temp,0,mx);
        return cnt;
    }
};