class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int size = words.size();
        if (s.length() != size) return false;

        for (int i = 0; i < size; i++) {
            if (words[i][0] != s[i]) return false;
        }

        return true;
    }
};
