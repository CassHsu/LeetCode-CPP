class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;
        
        for (int c = 0; c < matrix[0].size(); c++) {
            vector<int> tmp;
            
            for (int r = 0; r < matrix.size(); r++) {
                tmp.push_back(matrix[r][c]);
            }
            
            ans.push_back(tmp);
        }
        
        return ans;
    }
};
