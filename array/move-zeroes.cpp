class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        if (left == right && nums[0] == 0) {
            return;
        } else {
            while (left < right) {
                if (nums[left] == 0 && nums[right] != 0) {
                    swap(nums[left], nums[right]);
                    ++left;
                    --right;
                }
                ++left;
            }
            sort(nums.begin(), nums.begin() + left - 1);
        }
    }
};