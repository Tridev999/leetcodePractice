class Solution {
public:
    int subarraySum(vector<int>& nums) {
        vector<int> prefix;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            prefix.push_back(sum);
        }
        int s=0;
        for(int i=0;i<nums.size();i++){
            int st = max(0,i-nums[i]);
            if(st==0){
                s+=prefix[i];
            }
            else{
                int check = prefix[i];
                for(int i=0;i<st;i++){
                    check-=nums[i];
                }
                s+=check;
            }
        }
        return s;
    }
};