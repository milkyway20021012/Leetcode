class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0,right = nums.size() -1;
        while(left < right){
            int mid = (left + right + 1) / 2;
            // 左側一定有峰值
            if(nums[mid] < nums[mid - 1]){
                right = mid - 1;
            }
            // 右側一定有峰值
            else{
                left = mid;
            }
        }
        return left;
    }
};