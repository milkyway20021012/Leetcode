class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // Sliding Window
        int sum = 0, ret = INT_MAX;
        int n = nums.size();
        int len = 0;
        for(int left = 0, right = 0; right < n; right++){
            sum += nums[right];
            while(sum >=target){ // Update Window
                len = right -left +1;
                ret = min(ret,len);
                sum -= nums[left++];
            }
        }
        return len;
    }
};