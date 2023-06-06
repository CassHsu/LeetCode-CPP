class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int ans = 0;
        int mx = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > mx) mx = nums[i];
        }

        for (int i = 0; i < k; i++) {
            ans += mx;
            ans += i;
        }

        return ans;
    }
};
