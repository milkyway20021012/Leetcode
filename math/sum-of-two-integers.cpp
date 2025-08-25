class Solution {
public:
    int getSum(int a, int b) {
        while(b != 0){
            // 先算 a + b (無進位)
            int x = a ^ b;
            // 算進位
            int carry =  (a&b) << 1;
            // 更改 a 和 b 使其繼續循環
            a = x;
            b = carry;
        }
        return a;
    }
};