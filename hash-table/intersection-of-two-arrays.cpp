class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v_ret;
        set<int> s1(nums1.begin(),nums1.end());
        set<int> s2(nums2.begin(),nums2.end());
        for(auto &e : s1){
            if(s2.count(e)){
                v_ret.push_back(e);
            }
        }
        return v_ret;
    }
};