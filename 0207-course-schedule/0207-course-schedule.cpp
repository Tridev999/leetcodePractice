class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& pre) {
        queue<int> q;
        int n = numCourses;
        vector<int> indegree(n);
        int cnt=0;
        //convert to adj list
        vector<vector<int>> adj(n);
        for(auto x:pre){
            int req = x[1];
            int ready = x[0];
            adj[req].push_back(ready);
            indegree[ready]++;
        }
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int a = q.front();
            cnt++;
            q.pop();
            for(auto x:adj[a]){
                indegree[x]--;
                if(indegree[x]==0){
                    q.push(x);
                }
            }
        }
        if(cnt==n){
            return true;
        }
        return false;
        
    }
};