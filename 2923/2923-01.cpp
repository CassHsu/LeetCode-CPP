class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = 0; j < m; j++) {
                sum += grid[i][j];
            }

            if (sum == n - 1) return i;
        }
        
        return 0;
    }
};
