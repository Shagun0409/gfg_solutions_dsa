class Solution {
    private:
    bool dfs(int node,vector<vector<int>> &adj,vector<int> &vis, vector<int> &pathvis){
        vis[node]=true;
        pathvis[node]=true;
        
        
        for(auto it:adj[node]){
            if(!vis[it]){
                if(dfs(it,adj,vis,pathvis)){
                    return true;
                }
            }else if(pathvis[it]){
                return true;
                
            }
        }
        pathvis[node]=false;
        return false;
    }
  public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        
        
         vector<vector<int>> adj(V);
        for (auto &e : edges) {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
        }
      vector<int> vis(V, false);
vector<int> pathvis(V, false);
       
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(dfs(i,adj,vis,pathvis)){
                    return true;
                }
                
            }
        }
        return false;
        
        
        
    }
};