class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> um;

        for (const string str : strs) {
            string c(str);
            sort(c.begin(), c.end());
            um[c].push_back(str);
        }

        vector<vector<string>> v;
        v.reserve(um.size());

        for (auto& pair : um) {
            v.push_back(move(pair.second));
        }

        return v;
    }
};
