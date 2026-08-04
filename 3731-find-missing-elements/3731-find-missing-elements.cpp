class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> vec;
        sort(nums.begin(),nums.end());
        int min = nums[0];
        int max = nums[nums.size()-1];
        int j=0;
        while(min<=max){
            if(nums[j]==min){ //it is important
                j++;
            }
            else if(j < nums.size()){
                vec.push_back(min);
            }
            min++;
        }
        return vec;
    }
};