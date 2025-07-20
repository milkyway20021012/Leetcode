class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> v;
        int hash1[128] = {0};
        int hash2[128] = {0};
        for (int i = 0; i < p.size(); ++i) {
            hash2[p[i]]++;
        }
        int len = 0;
        for (int _left = 0, _right = 0; _right < s.size();) {
            // 进窗口
            while (len < p.size()) {
                hash1[s[_right]]++;
                ++len;
                ++_right;
            }
            // 判断 hash2 中的字母对应个数和 hash1 是否一样
            for (int i = 0; i < p.size(); ++i) {
                if (i == p.size() - 1 && hash1[p[i]] == hash2[p[i]]) {
                    v.push_back(_left);
                }
                if (hash1[p[i]] != hash2[p[i]]) {
                    break;
                }
            }
            // 出窗口
            hash1[s[_left]]--;
            ++_left;
            --len;
        }
        return v;
    }
};