class Solution {
public:
    bool dfs(vector<vector<int>> graph,int i,vector<int>& vec,int color){
        vec[i]=color;
        for(auto x:graph[i]){
            if(vec[x]==vec[i]){
                return false;
            }
            if(vec[x]==-1){
                int colorv = 1-color;
                if(dfs(graph,x,vec,colorv)==false){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> vec(n,-1);
        int color = 1;
        for(int i=0;i<graph.size();i++){
            if(vec[i]==-1){
                if(dfs(graph,i,vec,color)==false){
                    return false;
                }
            }
        }
        return true;
    }
};