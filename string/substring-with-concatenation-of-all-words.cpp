class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ret;
        unordered_map<string, int> hash1;
        // 将words的单词丢到unordered_map中 统计频次
        for (auto& e : words) {
            hash1[e]++;
        }
        int len = words[0].size(), m = words.size();

        for (int i = 0; i < len; ++i) {
            unordered_map<string, int> hash2; // 维护窗口内的单词频次
            for (int _left = i, _right = i, count = 0; _right + len < s.size();
                 _right += len) {
                string in = s.substr(_right, len);
                // 进窗口
                if (++hash2[in] <= hash1[in])
                    ++count;
                // 出窗口条件
                if (_right - _left + 1 > m * len) {
                    string out = s.substr(_left, len);
                    if (hash2[out] <= hash1[out])
                        --count;
                    --hash2[out];
                    _left += len;
                }
                // 更新结果
                if (count == m) {
                    ret.push_back(_left);
                }
            }
        }
        return ret;
    }
};