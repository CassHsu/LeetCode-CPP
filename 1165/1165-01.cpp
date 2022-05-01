class Solution {
public:
    int calculateTime(string keyboard, string word) {
        map<char, int> m;
        for (int i = 0; i < keyboard.size(); i++) {
            m[keyboard[i]] = i;
        }
        
        int count = 0;
        int curr = 0;
        for (int i = 0; i < word.size(); i++) {
            int w = m[word[i]];
            count += abs(w - curr);
            curr = w;
        }
        
        return count;
    }
};
