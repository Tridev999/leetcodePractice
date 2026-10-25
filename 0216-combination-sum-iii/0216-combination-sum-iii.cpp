class Solution {
public:
    vector<vector<int>> result;
    void solve(int k,int target,vector<int>& temp,int i,int sum){
        if(temp.size()==k){
            if(sum==target){
                result.push_back(temp);
            }
            return;
        }
        if(i>9){
            return;
        }
        temp.push_back(i);
        solve(k,target,temp,i+1,sum+i);
        temp.pop_back();
        solve(k,target,temp,i+1,sum);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> vec;
        vector<int> temp;
        int sum = 0;
        int i=1;
        solve(k,n,temp,i,sum);
        return result;
    }
};