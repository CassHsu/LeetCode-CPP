class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<int>> res(m, vector<int>(n, 0));
        
        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                int v = r * n + c;
                int shift = (v + k) % (m * n);
                int nr = shift / n;
                int nc = shift % n;
                res[nr][nc] = grid[r][c];
            }
        }
        
        return res;
    }
};
