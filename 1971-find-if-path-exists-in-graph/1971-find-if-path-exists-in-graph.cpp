class Solution {
public:
    bool ans = false;
    bool solve(int n,vector<vector<int>>& adj,int src,int dest,vector<int>& vis){
        if (src == dest) {
            return true;
        }
        vis[src]=1;
        for(auto x:adj[src]){
            if(!vis[x] && solve(n,adj,x,dest,vis)){
                return true;
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        vector<int> vis(n,0);
        for(auto edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        return solve(n,adj,source,destination,vis); 
    }
};