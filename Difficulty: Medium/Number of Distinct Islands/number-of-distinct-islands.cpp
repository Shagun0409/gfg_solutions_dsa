// User function Template for C++

class Solution {
  private:
    void dfs(int row, int col, vector<vector<int>>& grid, 
             vector<vector<int>>& vis, vector<pair<int,int>>& shape, 
             int row0, int col0) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        vis[row][col] = 1;
        shape.push_back({row - row0, col - col0}); // store relative position
        
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};
        
        for(int i = 0; i < 4; i++) {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m
               && grid[nrow][ncol] == 1 && !vis[nrow][ncol]) {
                dfs(nrow, ncol, grid, vis, shape, row0, col0);
            }
        }
    }
    
  public:
    int countDistinctIslands(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> vis(n, vector<int>(m, 0));
        set<vector<pair<int,int>>> st; // store unique shapes
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(!vis[i][j] && grid[i][j] == 1) {
                    vector<pair<int,int>> shape;
                    dfs(i, j, grid, vis, shape, i, j);
                    st.insert(shape);
                }
            }
        }
        
        return st.size();
    }
};
