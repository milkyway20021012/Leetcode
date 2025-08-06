class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") {
            return "0";
        }
        int n1 = num1.size();
        int n2 = num2.size();
        vector<int> tmp(n1 + n2);
        // 相加
        for (int i = 0; i < n1; ++i) {
            for (int j = 0; j < n2; ++j) {
                int a = num1[n1 - i - 1] - '0';
                int b = num2[n2 - j - 1] - '0';
                tmp[i + j] += a * b;
            }
        }
        // 處理carry
        int carry = 0;
        for(int i = 0;i<tmp.size();++i){
            tmp[i] += carry;
            carry = tmp[i] / 10;
            tmp[i] %= 10;
        }
        // 還原字串
        string ret;
        for(int i = tmp.size() - 1;i>=0;--i){
            if(ret.empty() && tmp[i] == 0){
                continue;
            }
            ret += tmp[i] + '0';
        }
        return ret;
    }
};