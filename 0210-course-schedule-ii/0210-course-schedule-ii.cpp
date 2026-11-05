class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& pre) {
        int n = numCourses;
        vector<vector<int>> adj(n);
        vector<int> indegree(n);
        //prepare adj list
        for(auto x:pre){
            int req = x[1];
            int ready = x[0];
            adj[req].push_back(ready);
            indegree[ready]++;
        }
        //queue and put it into it
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        //kahn algo
        vector<int> ans;
        while(!q.empty()){
            int a = q.front();
            q.pop();
            ans.push_back(a);
            for(auto x:adj[a]){
                indegree[x]--;
                if(indegree[x]==0){
                    q.push(x);
                }
            }
        }
        if(n==ans.size()){
            return ans;
        }
        return {};
    }
};