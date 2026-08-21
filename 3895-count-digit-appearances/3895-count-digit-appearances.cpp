class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            int n = nums[i];
            int r;
            while(n!=0){
               r=n%10;
               if(r==digit){
                  c++;
               } 
               n=n/10;
            }
        }
        return c;
    }
};