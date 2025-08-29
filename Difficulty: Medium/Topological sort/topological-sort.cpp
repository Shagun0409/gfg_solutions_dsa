class Solution {
    private:
  void dfs(int node, vector<int> &vis, stack<int> &st, vector<vector<int>> &adj)
{
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,vis,st,adj);
            }
        }
        st.push(node);
        
    }
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        for(int i=0; i<edges.size();i++) {
           int u=edges[i][0];
           int v=edges[i][1];
           adj[u].push_back(v);
       }
       
       vector<int> vis(V,0);
       stack<int> st;
       
       for(int i=0;i<V;i++){
           if(!vis[i]){
               dfs(i,vis,st,adj);
           }
       }
       
       vector<int> ans;
       while(!st.empty()){
           ans.push_back(st.top());
           st.pop();
       }
       
       return ans;
        
    }
};