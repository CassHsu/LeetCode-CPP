class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res (n, vector<int>(n));
        int count = 1;
        
        for (int lvl = 0; lvl < (n + 1) / 2; lvl++) {
            for (int p = lvl; p < n - lvl; p++) {
                res[lvl][p] = count++;
            }
            
            for (int p = lvl + 1; p < n - lvl; p++) {
                res[p][n - lvl - 1] = count++;
            }
            
            for (int p = n - lvl - 2; p >= lvl; p--) {
                res[n - lvl - 1][p] = count++;
            }
            
            for (int p = n - lvl - 2; p > lvl; p--) {
                res[p][lvl] = count++;
            }
        }
        
        return res;
    }
};
