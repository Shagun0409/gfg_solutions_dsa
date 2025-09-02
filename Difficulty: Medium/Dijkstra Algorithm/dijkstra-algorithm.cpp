// User Function Template
class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        vector<vector<pair<int,int>>> adj(V);
      
         for(auto it:edges){
            int u=it[0];
            int v=it[1];
            int wt=it[2];
           adj[u].push_back({v,wt});
           adj[v].push_back({u,wt});
            }
         vector<int>dist(V,1e9);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        dist[src] = 0;
        pq.push({0, src});
        
        while(!pq.empty()){
            int node=pq.top().second;
            int dis = pq.top().first;
            pq.pop();
            if (dis > dist[node]) continue;

            for(auto it: adj[node]){
                int v = it.first;
                int w = it.second;
                if(dis+w<dist[v]){
                    dist[v]=dis+w;
                     pq.push({dist[v], v});
                }
               

            }
        }
          
        return dist;
        
       
        
    }
};