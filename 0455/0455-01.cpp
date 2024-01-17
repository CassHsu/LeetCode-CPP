class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int count = 0;
        int gi = g.size() - 1;
        int si = s.size() - 1;

        while (si >= 0 && gi >= 0) {
            if (s[si] >= g[gi]) {
                count++;
                gi--;
                si--;
            } else {
                gi--;
            }
        }

        return count;
    }
};
