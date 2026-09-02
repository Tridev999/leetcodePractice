class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool even = true;
        int n = nums1.size();
        int oddc = 0;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2!=0){
                oddc++;
            }
        }
        return  (oddc==0 || oddc) ? true : false;
    }
};