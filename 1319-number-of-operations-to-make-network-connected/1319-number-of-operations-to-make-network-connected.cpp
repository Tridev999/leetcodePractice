class Solution {
public:
    int find(int i,vector<int>& parent){
        if(parent[i]==i){
            return i;
        }
        return parent[i]=find(parent[i],parent);
    }
    void union1(int x,int y,vector<int>& parent,vector<int>& rank){
        int x_parent = find(x,parent);
        int y_parent = find(y,parent);
        if(x_parent==y_parent){
            return;
        }
        if(rank[x_parent]>rank[y_parent]){
            parent[y_parent]=x_parent;
        }
        else if(rank[x_parent]<rank[y_parent]){
            parent[x_parent]=y_parent;
        }
        else{
            parent[x_parent]=y_parent;
            rank[y_parent]++;
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        int com = n;
        int edges = connections.size();
        vector<int> rank(n,0);
        vector<int> parent(n,0);
        if((edges)<(n-1)){
            return -1;
        }
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
        for(auto x:connections){
            int a  = find(x[0],parent);
            int b = find(x[1],parent);
            if(a!=b){
                union1(a,b,parent,rank);
                com--;
            }
        }
        return com-1;
    }
};