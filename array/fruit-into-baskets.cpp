class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> hash;
        int count = 0;
        int n = fruits.size();
        for(int _left = 0, _right = 0; _right < n ;++_right){
            // 進窗口
            hash[fruits[_right]]++;
            if(hash.size() > 2){
                // 出窗口
                hash[fruits[_left]]--;
                if(hash[fruits[_left]] == 0){
                    hash.erase(fruits[_left]);
                }
                ++_left;
            }
            // 更新數據
            count = max(count,_right - _left + 1);
        }
        return count;
    }
};