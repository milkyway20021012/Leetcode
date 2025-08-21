class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        int sum = 0;
        int ret = 0;
        hash[0] = 1;
        for(auto& x : nums){
            sum+=x;
            int r = (sum%k + k) % k;
            if(hash.count(r)) ret+= hash[r];     
            hash[r]++;
        }
        return ret;
    }
};