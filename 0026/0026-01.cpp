class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        
        int prev = 0;
        for (int curr = 1; curr < nums.size(); ++curr) {
            if (nums[prev] != nums[curr]) {
                prev++;
                nums[prev] = nums[curr];
            }
        }
        
        return prev + 1;
    }
};
