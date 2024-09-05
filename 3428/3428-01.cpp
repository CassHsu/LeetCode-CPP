class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int x = 0;
        std::vector<std::vector<int>> d(n, std::vector<int>(n, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                d[i][j] = x;
                x++;
            }
        }

        int i = 0, j = 0;
        for (const auto& c : commands) {
            if (c == "RIGHT") {
                j++;
            } else if (c == "DOWN") {
                i++;
            } else if (c == "LEFT") {
                j--;
            } else if (c == "UP") {
                i--;
            }
        }

        return d[i][j];
    }
};
