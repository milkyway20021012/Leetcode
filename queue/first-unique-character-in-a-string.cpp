class Solution {
public:
    int firstUniqChar(string s) {
        int hash[26] = {0}; // 26 对应26个字母

        for(int i = 0;i<s.size();++i){
            hash[s[i] - 'a']++;
        }
        for(int i = 0;i<s.size();++i){
            if(hash[s[i] - 'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};