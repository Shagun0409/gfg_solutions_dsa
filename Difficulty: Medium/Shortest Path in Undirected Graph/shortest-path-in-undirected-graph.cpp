class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        queue<int>q;
        int v=adj.size();
        int dist[v];
        for(int i = 0;i<v;i++) dist[i] = 1e9;
        dist[src]=0;
        
        q.push(src);
        
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:adj[node]){
               if(dist[node]+1<dist[it]){ 
                dist[it]=dist[node]+1;
                q.push(it);
               }
            }
        }
        
         vector<int> ans(v, -1);
        for(int i = 0;i<v;i++) {
            if(dist[i] != 1e9) {
                ans[i] = dist[i]; 
            }
        }
        return ans; 
       
        
        
    }
};