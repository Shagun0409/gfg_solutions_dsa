// User function Template for C++
class Solution {
    
    private:
    void topo(int node, int vis[], stack<int>& st, vector<pair<int, int>> adj[]){
         vis[node]=1;
        for(auto it:adj[node]){
            int v=it.first;
            if(!vis[v]){
                topo(v,vis,st,adj);
            }
        }
        st.push(node);
    }
  public:
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        vector < pair < int, int >> adj[V];
      for (int i = 0; i <E ; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];
        adj[u].push_back({v, wt}); 
      }
      
      int vis[V]={0};
      stack<int> st;
      
      for(int i=0;i<V;i++){
          if(!vis[i]) topo(i,vis,st,adj);
      }
      
      vector<int> dist;
      for(int i=0;i<V;i++) dist.push_back(1e9);
     dist[0]=0;
     while(!st.empty()){
         int node=st.top();
         st.pop();
         
         for(auto it:adj[node]){
             int v=it.first;
             int wt=it.second;
             
             if(dist[node]+wt<dist[v]) dist[v]=dist[node]+wt;
         }
     }
     for(int i=0; i<V; i++){
            if(dist[i]==1e9) dist[i]=-1;
        }
        return dist;
    }
};
