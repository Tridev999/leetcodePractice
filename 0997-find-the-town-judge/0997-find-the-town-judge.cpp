class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int,int> mpp;
        map<int,int> out;
        for(int i=0;i<trust.size();i++){
            mpp[trust[i][1]]++;
            out[trust[i][0]]++;
        }
        for(int i=1; i<=n; i++){
            if(mpp[i]==n-1 && out[i]==0){
                return i;
            }
        }
        return -1;
    }
};