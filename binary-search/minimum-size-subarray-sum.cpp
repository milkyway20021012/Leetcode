class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // Sliding Window
        int sum = 0, len = INT_MAX;
        int n = nums.size();
        for(int left = 0, right = 0; right < n; right++){
            sum += nums[right];
            while(sum >=target){ // Update Window
                len= min(len,right - left + 1);
                sum -= nums[left++];
            }
        }
        return len == INT_MAX ? 0 : len;
    }
};