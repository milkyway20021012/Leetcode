class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int hash_p[26] = {0};
        for(auto& e:p){ // 先统计p中的字母个数
            hash_p[e - 'a']++;
        }
        vector<int> v;
        int hash_s[26]= {0};
        for(int _left = 0,_right = 0,count = 0;_right < s.size() ; ++_right){
            // 进窗口
            char in = s[_right];
            if(++hash_s[in - 'a'] <= hash_p[in - 'a']) ++count;
            // 出窗口
            if(_right - _left + 1 > p.size()){
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