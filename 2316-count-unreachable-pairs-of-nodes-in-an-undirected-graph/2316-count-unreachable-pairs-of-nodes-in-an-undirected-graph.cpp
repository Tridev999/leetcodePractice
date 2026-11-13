class Solution {
public:
    int find(int i,vector<int>& parent){
        if(i==parent[i]){
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
        else if(rank[y_parent]>rank[x_parent]){
            parent[x_parent]=y_parent;
        }
        else{
            parent[x_parent]=y_parent;
            rank[y_parent]++;
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int> rank(n,0);
        vector<int> parent(n,0);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
        for(auto x:edges){
            int x1 = find(x[0],parent);
            int y = find(x[1],parent);
            union1(x1,y,parent,rank);
        }
        unordered_map<int,int> mpp;
        long long temp = n;
        long long sum = 0;
        for(int i=0;i<n;i++){
            mpp[find(parent[i],parent)]++;
        }
        for(const auto&[key,val]:mpp){
            sum+=val*(temp-val);
            temp=temp-val;
        }
        return sum;
    }
};