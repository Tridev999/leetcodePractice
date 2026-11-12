class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int max1 = 0;
        for(int i=0;i<n;i++){
        int inc = 1;
        int dec = 1;
        for(int j=i;j<n-1;j++){
            if(nums[j]<nums[j+1]){
                inc++;
            }  
            else{
                break;
            }      
        }
        for(int j=i;j<n-1;j++){
            if(nums[j]>nums[j+1]){
                dec++;
            }
            else{
                break;
            }
        }
        max1 = max({max1,inc,dec});
    }
    return max1;
    }

};