class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        map<char,int> m = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        for(int i = 0;i<s.size();++i){
            if(s[i] == 'I'){
                if(s[i+1] == 'V'){
                    sum +=4;
                    ++i;
                }
                else if(s[i+1] == 'X'){
                    sum+=9;
                    ++i;
                }
                else{
                    sum += m[s[i]];
                }
            }
            else if(s[i] == 'X'){
                if(s[i+1] == 'L'){
                    sum+=40;
                    ++i;
                }
                else if(s[i+1] == 'C'){
                    sum+=90;
                    ++i;
                }
                else{
                    sum +=m[s[i]];
                }
            }
            else if(s[i]== 'C'){
                if(s[i+1] == 'D'){
                    sum +=400;
                    ++i;
                }
                else if(s[i+1] == 'M'){
                    sum +=900;
                    ++i;
                }
                else{
                    sum +=m[s[i]];
                }
            }
            else{
                sum +=m[s[i]];
            }
            cout << sum << endl;
        }
        return sum;
    }
};