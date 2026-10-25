class Solution {
public:
    vector<vector<int>> result;
    void solve(int k,int target,vector<int> temp,int i){
        if(temp.size()==k){
            int sum = 0;
            for(int i=0;i<temp.size();i++){
                sum+=temp[i];
            }
            if(sum==target){
                result.push_back(temp);
            }
            return;
        }
        if(i>9){
            return;
        }
        temp.push_back(i);
        solve(k,target,temp,i+1);
        temp.pop_back();
        solve(k,target,temp,i+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> vec;
        vector<int> temp;
        int i=1;
        solve(k,n,temp,i);
        return result;
    }
};