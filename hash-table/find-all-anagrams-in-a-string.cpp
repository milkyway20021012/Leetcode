class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> v;
        int hash_s[26] = {0};
        int hash_p[26] = {0};
        for (auto& e : p) {
            hash_p[e - 'a']++;
        }
        int n = s.size();
        for (int _left = 0, _right = 0, count = 0; _right < n; ++_right) {
            // 进窗口
            char in = s[_right];
            if(++hash_s[in - 'a'] <= hash_p[in - 'a']) ++count; // 判断
            if(_right - _left + 1 > p.size()){ // s 读取的长度已经超过 p
                // 出窗口
                char out = s[_left++];
                if(hash_s[out - 'a']-- <= hash_p[out - 'a']) --count;
            }
            if(count == p.size()){
                v.push_back(_left);
            }
        }
        return v;
    }
};