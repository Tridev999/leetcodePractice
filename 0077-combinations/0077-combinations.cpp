class Solution {
public:
    vector<vector<int>> result;
    void csum(int n,int idx,int t,vector<int>& curr){
        if(curr.size()==t){
            result.push_back(curr);  // this condition should be first if idx > n also it is valid.
            return;
        }
        if(idx>n){
            return; // if size doesn't match then this one will work. 
        }

        csum(n,idx+1,t,curr);
        curr.push_back(idx);
        csum(n,idx+1,t,curr);
        curr.pop_back();
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> curr;
        int idx=1;
        csum(n,idx,k,curr); 
        return result;
    }
};