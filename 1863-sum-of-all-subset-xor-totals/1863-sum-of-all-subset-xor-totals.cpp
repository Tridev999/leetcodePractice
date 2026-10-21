class Solution {
public:
    int result=0;
    void solve(vector<int>& nums,vector<int> temp,int i){
        if(i>=nums.size()){
            if(temp.size()==0){
                result+=0;
            }
            else{
                int x = temp[0];
                for(int i=1;i<temp.size();i++){
                    x=x^temp[i];
                }
                result+=x;
            }
            return;
        }
        temp.push_back(nums[i]);
        solve(nums,temp,i+1);
        temp.pop_back();
        solve(nums,temp,i+1);
    }
    int subsetXORSum(vector<int>& nums) {
        vector<int> temp;
        solve(nums,temp,0);
        return result;
    }
};