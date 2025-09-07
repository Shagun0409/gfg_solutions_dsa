class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        
          vector<pair<int,int>> adj[n+1];
        for(auto it:edges){
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
        
        vector<int> dist(n+1, 1e9), parent(n+1);
        for(int i=1;i<=n;i++) parent[i]=i;
        
        dist[1] = 0;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,1});
        
       while(!pq.empty()){
            auto it = pq.top(); pq.pop();
            int dis = it.first;
            int node = it.second;
            
            for(auto neigh: adj[node]){
                int adjnode = neigh.first;
                int adjwt   = neigh.second;
                
                if(dist[adjnode] > dis + adjwt){
                    dist[adjnode] = dis + adjwt;
                    parent[adjnode] = node;
                    pq.push({dist[adjnode], adjnode});
                }
            }
        }
        if(dist[n]==1e9 ) return {-1};
        
       vector<int> path;
        int node = n;
        while(parent[node] != node){
            path.push_back(node);
            node = parent[node];
        }
        path.push_back(1);
        reverse(path.begin(), path.end());
        vector<int> ans;
        ans.push_back(dist[n]);
        for(int v: path) ans.push_back(v);
        
        return ans;
       


    }
};