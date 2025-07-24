class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // 暴力美學
        vector<pair<int,int>> v;
        int i,j;
        for(i = 0;i<numbers.size();++i){
            for(j = i+1;j<numbers.size();++j){
                if(numbers[i] + numbers[j] == target){
                    break;
                }
            }
        }
        return {i,j};
    }
};