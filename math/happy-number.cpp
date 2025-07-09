class Solution {
public:
    bool isHappy(int n) {
        int cnt = 10;
        int val = 0;
        string str = to_string(n);
        while (cnt) {
            val = 0;
            for (auto e : str) {
                int num = e - '0';
                val += pow(num, 2);
            }
            str = to_string(val);
            if(val == 1){
                return true;
            }
            --cnt;
        }
        return false;
    }
};