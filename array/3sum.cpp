class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // 有序數組 => 雙指針、二分查找

        // 1. 先排序
        sort(nums.begin(),nums.end());
        vector<vector<int>> vv;
        // 2. 固定數字
        for(int i = 0; i < nums.size() - 2;){
            // 3. 雙指針查找
            int left = i+1;
            int right = nums.size()-1;
            // 固定的數字
            int target = -nums[i];

            // 雙指針開始移動
            while(left < right){
                if(nums[left] + nums[right] == target){
                    vv.push_back({nums[i],nums[left],nums[right]});
                    ++left;
                    --right;
                    while(left < right && nums[left] == nums[left-1] ){
                        ++left;
                    }
                    while(left < right && nums[right] == nums[right+1]){
                        --right;
                    }
                }
                else{
                    if(nums[left] + nums[right] > target){
                        --right;
                    }
                    else{
                        ++left;
                    }
                }
            }
            ++i;
            while(i < nums.size() - 2){
                if(nums[i] == nums[i-1]){
                    ++i;
                }
                else{
                    break;
                }
            }
        }
        return vv;
    }
};