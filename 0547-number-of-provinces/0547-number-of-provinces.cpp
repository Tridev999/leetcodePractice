class Solution {
public:
    void dfs(int n,vector<vector<int>>& adj,vector<bool>& vec){
        vec[n]=true;
        for(int x:adj[n]){
            if(!vec[x]){
                dfs(x,adj,vec);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
       vector<vector<int>> adj(n);
        vector<bool> vec(n,false);
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<isConnected[i].size();j++){
                if(isConnected[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(!vec[i]){
                c++;
                dfs(i,adj,vec);
            }
        }
        return c;
    }
};