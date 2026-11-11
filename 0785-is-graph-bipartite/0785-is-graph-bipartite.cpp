class Solution {
public:
    bool bfs(vector<int>& vec,vector<vector<int>>& graph,int node,int color){
        vec[node]=color;
        queue<int> q;
        q.push(node);
        while(!q.empty()){
            int a = q.front();
            q.pop();
            for(auto x:graph[a]){
                if(vec[x]==vec[a]){
                    return false;
                }
                else if(vec[x]==-1){
                    vec[x]=1-vec[a];
                    q.push(x);
                }
            }
        }
        return true;
    }  
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n,-1);
        for(int i=0;i<n;i++){
            if(color[i]==-1){
                if(bfs(color,graph,i,1)==false){
                    return false;
                }
            }
        }
        return true;
    }
};