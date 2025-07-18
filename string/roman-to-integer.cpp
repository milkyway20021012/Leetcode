class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        map<string, int> m = {{"I", 1},   {"IV", 4},   {"V", 5},   {"IX", 10},
                              {"X", 10},  {"XL", 40},  {"L", 50},  {"XC", 90},
                              {"C", 100}, {"CD", 400}, {"D", 500}, {"CM", 900},
                              {"M", 1000}};
        string tmp = "";
        for(int i = 0;i<s.size();++i){
            tmp += s[i];
            if(tmp == "I" && s[i+1] == 'V' || tmp == "I" && s[i+1] == 'X'){
                tmp += s[i+1];
                ++i;
                sum += m[tmp];
            }
            else if(tmp == "X" && s[i+1] == 'L' || tmp == "X" && s[i+1] == 'C'){
                tmp +=s[i+1];
                ++i;
                sum +=m[tmp];
            }
            else if(tmp == "C" && s[i+1] == 'D' || tmp == "C" && s[i+1] == 'M'){
                tmp +=s[i+1];
                ++i;
                sum +=m[tmp];
            }
            else{
                sum +=m[tmp];
            }
            tmp = "";
        }
        return sum;
    }
};