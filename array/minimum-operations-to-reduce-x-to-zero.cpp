class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int i, j;
        int n = nums.size();

        int ret = INT_MAX;
        for (i = 0; i < n; ++i) {
            int sum = nums[i];
            int count = 1;
            if (sum == x) {
                ret = min(count,ret);
                continue;
            }
            for (j = i + 1; j < n; ++j) {

                sum += nums[j];
                ++count;
                // sum > x
                if (sum > x) {
                    sum -= nums[j];
                    --count;
                }
                // sum = x
                else if (sum == x) {
                    ret = min(count, ret);
                }
                // sum < x
                else {
                    continue;
                }
            }
        }
        return ret == INT_MAX ? -1 : ret;
    }
};