class Solution {
public:
    char findTheDifference(string s, string t) {
        if (s == "") {
            return t[0];
        }
        char ret;
        unordered_map<char, int> m;
        for (auto& e : s) {
            m[e]++;
        }
        for (auto& e : t) {
            if (m.find(e) == m.end()) {
                ret = e;
            }
        }
        return ret;
    }
};