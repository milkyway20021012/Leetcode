class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        // 想法：先找到最後一個被覆寫的數 再從後往前進行覆寫
        int cur = 0;
        int dest = 0;

        // 先找到最後一個複寫的數
        while (cur < arr.size())
            if (arr[cur]) {
                ++cur;
                ++dest;
            } else {
                ++cur;
                dest += 2;
                if (dest == arr.size() - 1 || dest == arr.size()) {
                    break;
                }
            }
    }

    // 判斷dest 是在什麼位置 (nums.size() -1 or nums.size() )
    while (dest) {
        if (dest == arr.size()) {
            arr[dest - 1] = arr[cur];
            dest -= 2;
            --cur;
        } else {
            if (arr[cur] == 0) {
                arr[dest] = 0;
                arr[dest - 1] = 0;
                --cur;
                dest -= 2;
                // 1,0,0,2,3,0,0,4
            } else {
                arr[dest] = arr[cur];
                --dest;
                --cur;
            }
        }
    }
}
}
};