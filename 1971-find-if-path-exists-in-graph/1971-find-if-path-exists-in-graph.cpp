class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<bool> vec(n,false);
        vector<vector<int>> adj(n);
        for (auto edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        if(edges.size()==0){
            return true;
        }
        queue<int> q; 
        q.push(source);
        vec[source] = true;
        while(!q.empty()){
            int fr = q.front();
            q.pop();
            for(int x:adj[fr]){
                if(destination==x){
                    return true;
                }
                if(!vec[x]){
                    q.push(x);
                    vec[x]=true;
                }
            }
        }
        return false;
    }
};