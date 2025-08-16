class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while(left < right){
            int mid = (left + right + 1 ) / 2;
            if(nums[mid] > target){
                right = mid -1;
            }
            else{   
                left = mid;
            }
        }
        if(nums[right] > target && right != 0) return right - 1;
        if(nums[right] < target) return right + 1;
        return left;
    }
};