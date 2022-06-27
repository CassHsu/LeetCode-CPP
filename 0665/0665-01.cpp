class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        bool changed = false;
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] >= nums[i - 1]) continue;
            if (changed) return false;
            
            if (i == 1 || nums[i] >= nums[i - 2]) nums[i - 1] = nums[i];
            else nums[i] = nums[i - 1];
            
            changed = true;
        }
        
        return true;
    }
};
