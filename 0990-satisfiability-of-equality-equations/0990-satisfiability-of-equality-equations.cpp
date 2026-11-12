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
    bool equationsPossible(vector<string>& equations) {
        vector<int> parent(26,0);
        vector<int> rank(26,0);
        for(int i=0;i<26;i++){
            parent[i]=i;
        }
        for(auto x:equations){
            if(x[1]=='='){
                union1(x[0]-'a',x[3]-'a',parent,rank);
            }
        }
        for(auto x:equations){
            if(x[1]=='!'){
                char a = x[0];
                char b = x[3];
                int x = find(a-'a',parent);
                int y = find(b-'a',parent);
                if(x==y){
                    return false;
                }
            }
        }
        return true;
    }
};