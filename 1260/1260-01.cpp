class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        
        while (k--) {
            int prev = grid[m - 1][n - 1];
            
            for (int r = 0; r < m; r++) {
                for (int c = 0; c < n; c++) {
                    int t = grid[r][c];
                    grid[r][c] = prev;
                    prev = t;
                }
            }
        }
        
        return grid;
    }
};
