class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int pr = 0;
        int n = nums.size();
        int c=1;
        for(int i=0;i<nums.size();i++){
            if(n%c==0){
                pr+=nums[i]*nums[i];
            }
            c++;
        }
        return pr;
    }
};