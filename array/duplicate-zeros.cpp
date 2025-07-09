class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        // 先找到最後一個要覆寫的數
        int cur = 0;
        int dest = 0;
        int n = arr.size();
        // [1,0,2,3,0,4,5,0]
        // [1,0,2,3,0,4]
        while (cur < n) {
            if (cur) {
                ++dest;
            } else {
                dest += 2;
            }
            ++cur;
            if (dest >= n - 1) {
                break;
            }
        }
        // 判斷dest的情況 如果dest == arr.size() 那麼就代表說最後要覆寫的值是0
        if (dest == n) {
            arr[dest - 1] = 0;
            dest -= 2;
            --cur;
        }

        while (cur >= 0) {
            if (arr[cur]) {
                arr[dest--] = arr[cur--];
            } else {
                arr[dest--] = 0;
                arr[dest--] = 0;
                --cur;
            }
        }
    }
};