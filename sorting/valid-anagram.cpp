class Solution {
public:
    bool isAnagram(string s, string t) {
        bool pd = s.size() != t.size() ? 1 : 0;
        if (pd) {
            return false;
        }
        int hash1[128] = {0};
        int hash2[128] = {0};
        for (int i = 0; i < s.size(); ++i) {
            hash1[s[i]]++;
        }
        for (int i = 0; i < t.size(); ++i) {
            hash2[t[i]]++;
        }

        for (int i = 0; i < s.size(); ++i) {
            if(hash1[s[i]] != hash2[s[i]]){
                return false;
            }
            if(hash2[t[i]] != hash1[t[i]]){
                return false;
            }
        }
        return true;
    }
};