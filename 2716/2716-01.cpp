class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_map<char, vector<int>> m;
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            m[c].push_back(i);
        }

        return m.size();
    }
};
