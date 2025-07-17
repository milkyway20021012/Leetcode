class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ret = 0;
        int n = nums.size();
        int zero = 0;
        // 1,1,1,0,0,0,1,1,1,1,0
        for(int left = 0, right = 0; right < n;++right){
            if(nums[right] == 0){
                ++zero;
            }
            while(zero > k){
                if(nums[left++] == 0){
                    --zero;
                }
            }
            ret = max(ret,right-left+1);
        }
        return ret;
    }
};