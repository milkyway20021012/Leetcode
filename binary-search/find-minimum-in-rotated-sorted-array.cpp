class Solution {
public:
    int findMin(vector<int>& nums) {
        // 先判斷
        if(nums.size() == 1){
            return nums[0];
        }
        int left = 0, right = nums.size() - 1;
        // 要先判斷是否數組和未旋轉前是一樣的
        if(nums[left] < nums[right]){
            return nums[left];
        }
        int x = nums[left];
        while(left < right){
            int mid = (left + right) /2;
            if(nums[mid] >= x){ // 代表現在在右區間
                left = mid + 1;
            }
            else{
                right = mid;
            }
        }
        return nums[left];
    }
};