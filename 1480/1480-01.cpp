class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int acc = 0;
        
        for (int n: nums) {
            acc += n;
            ans.push_back(acc);
        }
        
        return ans;
    }
};
