class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int _left = 0, _right = numbers.size() -1;
        while(_left != _right){
            if(numbers[_left] + numbers[_right] > target){
                --_right;
            }
            else{
                if(numbers[_left] + numbers[_right] == target){
                    break;
                }
                ++_left;
            }
        }
        return {_left,_right};
    }
};