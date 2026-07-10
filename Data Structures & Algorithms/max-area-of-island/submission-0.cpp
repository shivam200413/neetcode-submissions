class Solution {
public:
    int dfs(int i, int j, vector<vector<int>> &grid, vector<vector<bool>> &vis, int m, int n){
        
        if(i<0 || j<0 || i>=m || j>=n || vis[i][j] || grid[i][j] == 0 ) return 0;
        
        vis[i][j] = true;
        int cnt = 1;
        cnt += dfs(i-1, j, grid, vis, m, n);
        cnt += dfs(i+1, j, grid, vis, m, n);
        cnt += dfs(i, j+1, grid, vis, m, n);
        cnt += dfs(i, j-1, grid, vis, m, n);
        return cnt;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> vis(m,vector<bool>(n));

        int area = 0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] && grid[i][j] == 1){
                    area = max(area, dfs(i, j, grid, vis, m, n));
                }
            }
        }
        return area;
    }
};
