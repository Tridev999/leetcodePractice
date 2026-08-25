class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int s=k;
        while(true){
            if(mpp.contains(s)){
                s=s+k;
            }
            else{
                return s;
            }
        }
    }
};