class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0;
        for (auto& e :nums) {
            sum += e;
        }
        // 思路：從一段連續的區間找到最長的連續區間使得 len(這段區間的長度) -
        // nums.size() 最小
        int target = sum - x;
        if(target < 0){
            return -1;
        }
        int n = nums.size();
        int len = -1;
        for (int left = 0, right = 0, tmp = 0; right < n; ++right) {
            // 進窗口
            tmp += nums[right];
            while(tmp > target){
                // 出窗口
                tmp -= nums[left++];
            }
            if(tmp == target){
                len = max(len,right-left+1);
            }
        }
        return len == -1 ? -1 : n - len;
    }
};