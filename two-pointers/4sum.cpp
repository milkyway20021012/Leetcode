class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        // 有序 => 雙指針、二分
        int n = nums.size();
        vector<vector<int>> vv;
        for (int i = 0; i < n;) {         // 固定數字a (變成找三數和)
            for (int j = i + 1; j < n;) { // 固定數字b (找雙數和)
                int left = j + 1;
                int right = n - 1;
                while (left < right) {
                    long long sum = (long long)nums[i] + nums[j];
                    if (sum + nums[left] + nums[right] == target) {
                        vv.push_back(
                            {nums[i], nums[j], nums[left], nums[right]});
                        ++left;
                        --right;
                        while (left < right && nums[left] == nums[left - 1]) {
                            ++left;
                        }
                        while (left < right && nums[right] == nums[right + 1]) {
                            --right;
                        }
                    } else {
                        if (sum + nums[left] + nums[right] >
                            target) {
                            --right;
                        } else {
                            ++left;
                        }
                    }
                }
                ++j;
                while (j < n && nums[j] == nums[j - 1]) {
                    ++j;
                }
            }
            ++i;
            while (i < n && nums[i] == nums[i - 1]) {
                ++i;
            }
        }
        return vv;
    }
};