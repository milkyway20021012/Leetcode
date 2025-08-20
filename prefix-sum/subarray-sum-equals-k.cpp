class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        hash[0] = 1;
        int sum = 0, ret =0;
        for(auto x : nums){
            sum+=x;
            if(hash.count(sum-k)) ret+= hash[sum-k];
            hash[sum]++;
        }
        return ret;

    }
};