class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ret = 0, n = nums.size();
        for(int i = 0;i<=n;++i){
            ret ^= i;
        }
        for(auto& e : nums){
            ret ^=e;
        }
        return ret;
    }
};