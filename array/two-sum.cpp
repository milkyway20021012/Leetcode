class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for (int k = 0; k < n * n; ++k) {
            int i = k / n;
            int j = k % n;
            if (i >= j)
                continue; // 確保每對只檢查一次，且不重複
            if (numbers[i] + numbers[j] == target) {
                return {i, j};
            }
        }
        return {};
    }
};