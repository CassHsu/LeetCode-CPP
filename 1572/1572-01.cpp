class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0;

        for (int l = 0, r = mat.size() - 1; l < mat.size(); l++, r--) {
            if (l == r) {
                ans += mat[l][l];
            } else {
                ans += mat[l][l];
                ans += mat[l][r];
            }
        }

        return ans;
    }
};
