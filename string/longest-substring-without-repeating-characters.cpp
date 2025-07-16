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
                ret = max(ret,right-left);
                hash[s[left++]]--; // Leaving Window
            }
            right++;
        }   
        return s == " " ? 1 : ret;
    }
};