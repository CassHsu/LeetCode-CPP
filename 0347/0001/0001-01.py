class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        vector<int> ans;
        
        for (int i = 0; i < nums.size(); i++) {
            if (m.find(nums[i]) != m.end()) {
                ans.push_back(m[nums[i]]);
                ans.push_back(i);
                break;
                
            } else {
                m[target - nums[i]] = i;
            }
        }
        
        return ans;
    }
};
