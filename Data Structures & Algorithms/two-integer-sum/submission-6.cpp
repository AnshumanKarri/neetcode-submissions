class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> v = {-1,-1};
        bool found = false;
        for (int i = 0; i < nums.size(); i++) {
            if (!found) {
                for (int j = i + 1; j < nums.size(); j++) {
                    if (nums[i] + nums[j] == target) {
                        v = {i,j};
                        found = true;
                        break;
                    }
                }
            } else {
                break;
            }
        }
        return v;
    }
};
