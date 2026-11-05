class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int i = 0;
        int n = arr1.size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            bool ans = true;
            for(int j=0;j<arr2.size();j++){
                int diff = abs(arr1[i]-arr2[j]);
                if(diff<=d){
                    ans=false;
                    break;
                }
            }
            if(ans){
                cnt++;
            }
        }
        return cnt;
    }
};