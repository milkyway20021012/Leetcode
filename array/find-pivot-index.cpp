class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sz = nums.size();
        vector<int> front_sum(sz,0);
        vector<int> back_sum(sz,0);
        front_sum[0] = 0;
        back_sum[sz-1] = 0;
        for(int i = 1;i<sz;++i){
            front_sum[i] = front_sum[i-1] + nums[i-1];
        }
        for(int j = sz-2 ;j>=0;j--){
            back_sum[j] = back_sum[j+1] + nums[j+1];
        }
        for(int i = 0;i<sz;++i){
            if(front_sum[i] == back_sum[i])
                return i;
        }
    return -1;
    }
};