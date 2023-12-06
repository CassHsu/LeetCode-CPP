class Solution {
public:
    int minimizedStringLength(string s) {
        vector<bool> m(26, 0);
        int count = 0;

        for (auto &i: s) {
            if (!m[i - 'a']) {
                count++;
                m[i - 'a'] = true;
            }
        }

        return count;
    }
};
