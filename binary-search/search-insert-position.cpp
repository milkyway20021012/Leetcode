class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size() == 0){
            return 0;
        }
        int left = 0,right = nums.size() - 1;
        while(left < right){
            int mid = (left + right ) / 2;
            if(nums[mid] == target) return mid;
            if(nums[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        if(right == 0 && nums[right] > target) return 0;
        return left + 1;
    }
};