class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++) {
            int n = target - nums[i];

            if (seen.contains(n)) {
                return {seen[n], i};
            }

            seen[nums[i]] = i;
        }
        return {};
    }
};
