class Solution {
public:
    string modifyString(string s) {
        vector<char> letter;
        for (char i = 'a'; i <= 'z'; ++i) {
            letter.push_back(i);
        }
        for (int i = 0; i < s.size(); ++i) {
            char alter = letter[i % letter.size()];
            while(s[i] == '?'){
                if(i == 0 && s[i+1] != alter || i == s.size() - 1 && s[i-1] != alter){
                    s[i] = alter;
                }
                else if(s[i+1] != alter && s[i-1] != alter){
                    s[i] = alter;
                }
                else{
                    alter++;
                }
            }
        }
        return s;

    }

};