class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
        int c = 0, r = 0, o = 0, a = 0, k = 0;
        int current = 0, maxCurrent = 0;

        for (char ch : croakOfFrogs) {
            if (ch == 'c') {
                if (k > 0) {
                    --k;
                } else {
                    ++current;               // 新青蛙開始叫
                    maxCurrent = max(maxCurrent, current);
                }
                ++c;
            } else if (ch == 'r') {
                if (c == 0) return -1;
                --c; ++r;
            } else if (ch == 'o') {
                if (r == 0) return -1;
                --r; ++o;
            } else if (ch == 'a') {
                if (o == 0) return -1;
                --o; ++a;
            } else if (ch == 'k') {
                if (a == 0) return -1;
                --a; ++k;
                --current;                  // 一隻青蛙結束叫聲
            } else {
                return -1; // 非法字元
            }
        }
        if (c || r || o || a) return -1; // 有未完成的叫聲
        return maxCurrent;
    }
};