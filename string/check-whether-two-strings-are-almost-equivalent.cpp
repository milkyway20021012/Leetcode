class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int hash1[26] = {0};
        int hash2[26] = {0};
        for (auto& e1 : word1) {
            hash1[e1 - 'a']++;
        }
        int _max = 0;
        for (auto& e2 : word2) {
            hash2[e2 - 'a']++;
        }

        for (auto& e1 : word1) {
            int minus = hash1[e1 - 'a'] - hash2[e1 - 'a'];
            int _abs = abs(minus);
            _max = max(0, _abs);
            if (_max > 3) {
                return false;
            }
        }
        for (auto& e2 : word2) {
            int minus = hash1[e2 - 'a'] - hash2[e2 - 'a'];
            int _abs = abs(minus);
            _max = max(0, _abs);
            if (_max > 3) {
                return false;
            }
        }
        return true;
    }
};