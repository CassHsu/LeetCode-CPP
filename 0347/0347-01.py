class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (k == nums.size()) return nums;
        
        map<int, int> count;
        for (int n: nums) {
            count[n] += 1;
        }
        
        auto compare = [&count](int n1, int n2) {
            return count[n1] > count[n2];
        };
        
        priority_queue<int, vector<int>, decltype(compare)> heap(compare);
        
        for (pair<int, int> p: count) {
            heap.push(p.first);
            if (heap.size() > k) heap.pop();
        }
        
        vector<int> top(k);
        for (int i = k - 1; i >= 0; i--) {
            top[i] = heap.top();
            heap.pop();
        }
        
        return top;
    }
};
