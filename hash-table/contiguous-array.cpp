class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> hash;
        int sum = 0,ret = 0;
        hash[0] = -1;
        for(int i = 0 ;i<nums.size();++i){
            sum += nums[i] == 0 ? -1 : 1; // 計算前綴和
            if(hash.count(sum)) ret = max(ret,i - hash[sum]);
            else hash[sum] = i;
            
        }
        return ret;
    }
};