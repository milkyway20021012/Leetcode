class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0,right = nums.size() - 1;
        int x = nums[left];
        while(left < right){
            int mid = (left + right) / 2;
            if(nums[mid] > x && nums[mid] > nums[mid + 1] ){
                left = mid + 1;
            }
            else{
                right = mid;
            }
        }
        return nums[left];
    }
};