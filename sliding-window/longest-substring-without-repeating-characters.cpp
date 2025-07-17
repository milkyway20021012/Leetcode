class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Sliding Window
        int left = 0,right =0;
        int ret = 0;
        int n  = s.size();
        int hash[128] = {0};
        while(right < n){
            hash[s[right]]++; // Entering Window
            while(hash[s[right]] > 1){
                hash[s[left++]]--; // Leaving Window
            }
            ret = max(ret,right-left+1);
            right++;
        }   
        return ret;
    }
};