class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        // 先排序
        // 知識點： 若 a <= b <=c 則我們只要判斷 a+b是否大於c即可
        sort(nums.begin(), nums.end());
        int sz = nums.size()-1;
        int max = nums[sz];
        int left = 0;
        int right = sz -1;
        int ret = 0;
        // 2 3 4 4
        while (sz > 1) {
            while (left != right) {
                if (nums[left] + nums[right] > max) {
                    ret += (right - left);
                    --right;
                } else {
                    if (nums[left] + nums[right] == max) {
                        ++left;
                    }
                }
            }
            left = 0;
            max = nums[--sz];
            right = sz - 1;
            
            
        }
        return ret;
    }
};