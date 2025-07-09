class Solution {
public:
    bool isHappy(int n) {
        int cnt = 0;
        int val = 0;
        string str = to_string(n);
        while (val != 1) {
            val = 0;
            for (auto e : str) {
                int num = e - '0';
                val += pow(num, 2);
            }
            str = to_string(val);
            ++cnt;
            if (cnt >= 10) {
                break;
            }
        }
        if (val == 1) {
            return true;
        }
        return false;
    }
};