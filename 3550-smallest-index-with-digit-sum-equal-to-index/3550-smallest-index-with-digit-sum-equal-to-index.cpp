class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int min1 = INT_MAX;
        for(int i=0;i<nums.size();i++){
            int n = nums[i];
            int s = 0;
            while(n!=0){
                int r = n%10;
                s=s+r;
                n=n/10;
            }
            if(s==i){
                min1 = min(min1,i);
            }
        }
        if(min1==INT_MAX){
            return -1;
        }
        return min1;
    }
};