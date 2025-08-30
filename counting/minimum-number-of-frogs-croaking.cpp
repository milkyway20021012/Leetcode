class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
        int c = 0, r = 0, o = 0, a = 0, k = 0;
        // 最少青蛙 -> 過程中同時叫的最大數
        int cur = 0, max_cur = 0;
        for (auto& ch : croakOfFrogs) {
            if (ch == 'c') {
                if (k > 0)
                    --k;
                else {
                    ++cur;
                    max_cur = max(cur, max_cur);
                }
                ++c;
            } else if (ch == 'r') {
                if (c == 0)
                    return -1;
                --c, ++r;
            } else if (ch == 'o') {
                if (r == 0)
                    return -1;
                --r, ++o;
            } else if (ch == 'a') {
                if (o == 0) return -1;
                --o,++a;
            }
            else{
                if( a == 0) return -1;
                --a,++k;
                // 此時代表有一隻青蛙叫完了
                --cur;
            }
        }
        if(c || r || o || a) return -1;
        return max_cur;
    }
};