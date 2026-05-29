class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.empty()) return {};
        vector<vector<string>> v = {};
        unordered_map<string, int> um;
        v.push_back({strs[0]});
        string c1(strs[0]);
        sort(c1.begin(), c1.end());
        um[c1] = 0;
        for (int i = 1; i < strs.size(); i++) {
            c1 = strs[i];
            sort(c1.begin(), c1.end());
            if (um.contains(c1)) {
                v[um[c1]].push_back(strs[i]);
            } else {
                v.push_back({strs[i]});
                um[c1] = v.size() - 1;
            }
        }
        return v;
    }
};
