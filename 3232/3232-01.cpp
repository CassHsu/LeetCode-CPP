class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int s = 0;
        int d = 0;

        for (int n : nums) {
            if (std::to_string(n).length() == 1) {
                s += n;
            } else {
                d += n;
            }
        }

        return s != d;
    }
};
