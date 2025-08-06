class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int _left = 0;
        for(int _right = 1;_right<nums.size();){
            while(_right < nums.size() && nums[_right] == nums[_left]){
                ++_right;
            }
            if(_right == nums.size()){
                break;
            }
            nums[++_left] = nums[_right]; 
        }
        cout << _left;
        return _left == 0 ? 1 : _left;
    }
};