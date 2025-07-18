class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        map<char, int> mp{{'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
                          {'C', 100}, {'D', 500}, {'M', 1000}};

        for(int i = 0;i<s.size();++i){
            if(mp[s[i+1]] > mp[s[i]]){
                sum -= mp[s[i]];
            }
            else{
                sum +=mp[s[i]];
            }
            cout << sum << endl;
        }
        return sum;
    }
};