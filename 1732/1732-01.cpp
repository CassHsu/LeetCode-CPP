class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max = 0;
        int last = 0;

        for (auto& g : gain) {
            last = last + g;
            if (last > max) max = last;
        }

        return max;
    }
};
