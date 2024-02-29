class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        int c1 = 0, c2 = 0;
        for (auto& n: nums1) c1 += s2.count(n);
        for (auto& n: nums2) c2 += s1.count(n);

        return {c1, c2};
    }
};
