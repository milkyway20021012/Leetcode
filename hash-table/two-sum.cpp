class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // hash
        unordered_map<int,int> m;
        for(int i = 0;i<numbers.size();++i){
            int num = numbers[i];
            if(m.find(target - num) != m.end()){
                return {i,m[target - num]}; // 因爲題目說只有唯一解 所以找到就是答案 
                // find => 看key return => return value
            } 
            m[num] = i;
            // value = idx
        }
        return {};
    }

};