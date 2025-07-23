class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0"){
            return "0";
        }
        int n1 = num1.size();
        int n2 = num2.size();
        vector<int> v(n1+n2); // 用来存相加的结果 ( 两数相乘 最多有 n1 + n2 个位数 )
        // 先处理相乘的结果
        for(int i = 0;i<n1;++i){
            for(int j = 0;j<n2;++j){
                // 取值
                int a = num1[n1 - i - 1] - '0';
                int b = num2[n2 - j - 1] - '0';
                v[i+j] += a * b;
            }
        }
        // 处理进位
        for(int i = 0,carry = 0;i<v.size();++i){
            v[i] += carry;
            carry = v[i] / 10;
            v[i] %= 10;
        }
        // 转回字符串
        string ret;
        for(int i = v.size()-1;i>=0;--i){
            ret += v[i] + '0';
        }
        if(ret[0] == '0'){
            ret.erase(ret.begin());
        }
        return ret;
    }
};