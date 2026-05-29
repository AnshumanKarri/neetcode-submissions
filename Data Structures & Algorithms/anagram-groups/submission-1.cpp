class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v = {};
        v.push_back({strs[0]});
        for (int i = 1; i < strs.size(); i++) {
            bool isAnagram = false;
            for (int j = 0; j < v.size(); j++) {
                string c1(v[j][0]);
                string c2(strs[i]);
                sort(c1.begin(), c1.end());
                sort(c2.begin(), c2.end());
                if (c1 == c2) {
                    isAnagram = true;
                    v[j].push_back(strs[i]);
                }
            }
            if (!isAnagram) {
                v.push_back({strs[i]});
            }
        }
        return v;
    }
};
