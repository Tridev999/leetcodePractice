class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> first;
        vector<int> second;
        first.push_back(nums[0]); //this is the most important one
        second.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
                if(first[first.size()-1]>second[second.size()-1]){
                    first.push_back(nums[i]);
                }
                else{
                    second.push_back(nums[i]);
                }
            }
        for(int i=0;i<second.size();i++){
            first.push_back(second[i]); 
        }
        return first;
    }
};