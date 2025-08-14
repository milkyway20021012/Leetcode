class Solution {
public:
    string minWindow(string s, string t) {
        // 定義哈希表
        unordered_map<char,int> hs,ht;
        // 將t字串中的字母添加到哈希表中
        for(auto& e : t){
            ht[e]++;
        }
        string ret;
        // 開始遍歷
        for(int left = 0,right = 0,cnt=0;right<s.size();++right){
            // 入窗口
            if(++hs[s[right]] <= ht[s[right]]) cnt++;
            // 出窗口
            while(hs[s[left]] > ht[s[left]]) hs[s[left++]]--;
            // 更新結果
            if(cnt == t.size()){
                if(ret.empty() || ret.size() > right-left+1){
                    // 替換ret
                    // ADOBECODEBANC
                    ret = s.substr(left,right-left+1);
                }
            }
        }
        return ret;
    }
};