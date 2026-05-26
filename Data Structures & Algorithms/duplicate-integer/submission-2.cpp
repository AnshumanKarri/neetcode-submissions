class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool dup = false;
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            for (int j = 0; j < nums.size(); j++) {
                if (j != i && nums[j] == x) {
                    dup = true;
                }
            }
        }
        return dup;
    }
};