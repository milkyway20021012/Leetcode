class Solution {
public:
    int maxPower(string s) {
        int count = 0;
        for(int _left = 0,_right = 0; _right <s.size();){
            while(s[_left] == s[_right] && _right < s.size()){
                count = max(count,_right-_left + 1);
                ++_right;
            }
            _left = _right;
        }
        return count;
    }
};