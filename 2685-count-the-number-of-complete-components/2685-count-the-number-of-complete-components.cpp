class Solution {
public:
    void dfs(vector<vector<int>> adj,vector<int>& vis,int i,int& ans,int& edc){
        vis[i]=1;
        ans=ans+1;
        for(auto x:adj[i]){
            edc=edc+1;
            if(!vis[x]){
                vis[x]=1;
                dfs(adj,vis,x,ans,edc);
            }
        }

    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        int result = 0;
        for(auto x:edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        vector<int> vis(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                int edc = 0;
                int ans = 0;
                dfs(adj,vis,i,ans,edc);
                int check = (ans*(ans-1))/2;
                if(ans==1){
                    result++;
                }
                else if(check==(edc/2)){
                    result++;
                }
            }
        }
        return result;
    }
};