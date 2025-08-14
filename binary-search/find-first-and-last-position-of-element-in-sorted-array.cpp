class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ret;
        int left = 0, right = nums.size();
        while (left <= right - 1){
            int mid = (left + right) / 2;
            if(nums[mid] == target){
                ret.push_back(mid);
            }
            if(nums[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid -1;
            }
        }
        if(nums.size() == 1 && !ret.empty()){
            ret.push_back(ret[0]);
            return ret;
        }
        if(nums.size() != 1 && !ret.empty()){
            ret.push_back(ret[0] + 1);
            return ret;
        }
        return {-1,-1};
    }
};