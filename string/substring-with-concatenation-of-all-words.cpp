class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ret;
        unordered_map<string, int> hash1; // 保存 words ⾥⾯所有单词的频次
        for (auto& s : words)
            hash1[s]++;
        int len = words[0].size(), m = words.size();
        for (int i = 0; i < len; i++) // 执⾏ len 次
        {
            unordered_map<string, int> hash2; // 维护窗⼝内单词的频次
            for (int left = i, right = i, count = 0; right + len <= s.size();
                 right += len) {
                // 进窗⼝ + 维护 count
                string in = s.substr(right, len);
                hash2[in]++;
                if (hash2[in] <= hash1[in])
                    count++;
                // 判断
                if (right - left + 1 > len * m) {
                    // 出窗⼝ + 维护 count
                    string out = s.substr(left, len);
                    if (hash2[out] <= hash1[out])
                        count--;
                    hash2[out]--;
                    left += len;
                }
                // 更新结果
                if (count == m)
                    ret.push_back(left);
            }
        }
        return ret;
    }
};