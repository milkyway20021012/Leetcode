class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // 暴力美學
        vector<int> v;
        for(int i = 0;i<numbers.size();++i){
            for(int j = i+1;j<number.size();++j){
                if(numbers[i] + numbers[j] == target){
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
            }
        }
        return v;
    }
};