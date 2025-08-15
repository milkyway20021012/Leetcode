class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int begin = 0;
        if(nums.size() == 0){
            return {-1,-1};
        }
        int left = 0, right = nums.size() - 1;
        // 左區間
        while(left < right){
            int mid = (left + right) / 2;
            if(nums[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid;
            }
        }
        if(nums[left] != target) return {-1,-1};
        // 先把left的結果保存下來
        begin = left;
        right = nums.size() -1;
        while(left < right){
            int mid = (left + right + 1 ) / 2;
            if(nums[mid] > target){
                right = mid - 1;
            }
            else{
                left = mid;
            }
        }
        return {begin,begin+1};


    }
};