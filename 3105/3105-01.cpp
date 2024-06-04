class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int mx = 1;
        int up = 1;
        int dn = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                up++;
                dn = 1;
            } else if (nums[i] < nums[i - 1]) {
                dn++;
                up = 1;
            } else {
                up = 1;
                dn = 1;
            }

            mx = std::max(mx, std::max(up, dn));
        }

        return mx;
    }
};
