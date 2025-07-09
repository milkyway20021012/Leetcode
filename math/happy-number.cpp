class Solution {
public:
    bool isHappy(int n) {
        if(n < 10 && n != 1){
            return 0;
        }
        int val = 0;
        string str = to_string(n);
        while(val != 1){
            val = 0;
            for(int i = 0;i<str.size();++i){
                int num = str[i] - '0';
                val += pow(num,2);
            }
            str = to_string(val);
        }
        return true;
    }
};