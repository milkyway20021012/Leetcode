class Solution {
public:
    int maxArea(vector<int>& height) {
        // [1,8,6,2,5,4,8,3,7]
        int left = 0;
        int right = height.size() - 1;
        int max = 0;
        int ret = 0;
        while (left != right) {
            if (height[left] <= height[right]) {
                ret = height[left] * (right - left);
                ++left;
            } else {
                ret = height[right] * (right - left);
                --right;
            }

            if (ret > max) {
                max = ret;
            }
        }
        return max;
    }
};