class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // 思路：雙指針 => dest、cur  
        // dest 表示的是當前已經處理的非0元素
        // cur 表示的是為處理的元素
        // 0 - dest => 已處理 非 0
        // dest + 1 - cur - 1 已處理的 0
        // cur + 1 - n -1 (數組最後一個下標) => 未處理

        int dest = -1; // 因爲剛開始的時候還沒有已經處理的非0元素 所以先讓dest的值不在數組下標中
        int cur = 0;

        while(cur < nums.size()){
            if(nums[cur] == 0){
                cur++;
            }
            else{
                swap(nums[dest+1],nums[cur]);
                cur++;
                dest++;
            }
        }
    }
};