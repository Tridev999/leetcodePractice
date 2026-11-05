class Solution {
public:
    void bfs(vector<int>& vis,vector<vector<int>>& adj,int i){
        queue<int> q;
        vis[i]=1;
        q.push(i);
        while(!q.empty()){
            int a = q.front();
            q.pop();
            for(auto x:adj[a]){
                if(!vis[x]){
                    vis[x]=1;
                    q.push(x);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> adj(n);
        vector<int> vis(n,0);
        int cnt = 0;
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected[i].size();j++){
                if(isConnected[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(!vis[i]){
                bfs(vis,adj,i);
                cnt++;
            }
        }
        return cnt;
    }
};