class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ret = 0;
        for (int i = 0; i < 32; ++i) {
            int cnt = 0;
            for (auto& num : nums) {
                // 統計三的個數
                cnt += (num >> i) & 1;
            }
            if(cnt % 3){
                ret |= (1 << i);
            }
        }
        return ret;
    }
};