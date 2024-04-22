class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int seconds = 0;
        int n = tickets.size();
        vector<int> queue(n, 0); 

        while (queue[k] < tickets[k]) {
            for (int i = 0; i < n; i++) {
                if (queue[k] == tickets[k] && i > k)
                    break;

                if (queue[i] < tickets[i]) {
                    queue[i] += 1;
                    seconds += 1;
                }
            }
        }
        return seconds;
    }
};
