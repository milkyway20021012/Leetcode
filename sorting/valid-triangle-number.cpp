class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int ret = 0, n = nums.size();
        
        for(int i = n - 1;i>=2;--i){
            int left = 0, right = i-1;
            while(left != right){
                if(nums[left] + nums[right] > max){
                    ret += right - left;
                    --right;
                }
                else{
                    ++left;
                }
            }
        }
        return ret;
    }
};