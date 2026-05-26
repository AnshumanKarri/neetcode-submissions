class Solution {
public:
    bool isAnagram(string s, string t) {
        bool is = true;
        if (s.length() != t.length()) {
            is = false;
        } else {
            for (int i = 0; i < s.length(); i++) {
                int pos = t.find(s[i]);
                if (pos != std::string::npos) {
                    t.erase(pos, 1);
                } else {
                    is = false;
                    break;
                }
            }
        }
        return is;
    }
};
