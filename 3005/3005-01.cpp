class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int ans = 0;
        int res = 0;
        unordered_map<int, int> m;

        for (auto it: nums) {
            m[it]++;
            ans = max(ans, m[it]);
        }

        for(auto it: m) {
            if (it.second == ans) {
                res += it.second;
            }
        }
        return res;
    }
};
