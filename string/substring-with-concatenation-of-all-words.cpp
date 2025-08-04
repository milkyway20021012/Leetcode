class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ret;
        unordered_map<string,int> hash1; // 統計words中的每一個字串出現的次數
        for(auto& e : words){
            hash1[e]++;
        }
        int len = words[0].size();
        int m = words.size();

        for(int i = 0;i<len;++i){ // 可能出現的位置
            unordered_map<string,int> hash2;
            //  _right + len <= s.size() 一定要等於 不然會統計不到 s 最後一個字串
            for(int _left = i,_right = i,count = 0; _right + len <= s.size(); _right+=len){
                // 入窗口
                string in = s.substr(_right,len);
                if(hash1.count(in) && ++hash2[in] <=  hash1[in]) ++count;
                //  判斷 是否出窗口
                if(_right - _left + 1 > m * len){
                    // 出窗口
                    string out = s.substr(_left,len);
                    if(hash1.count(out) && hash2[out] <= hash1[out] ) --count;
                    --hash2[out];
                    _left += len;
                }
                if(count == m){
                    ret.push_back(_left);
                }
            }

        }
        return ret;
    }
};