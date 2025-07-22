class Solution {
public:
    string reverseWords(string s) {
        for(int _left = 0, _right = 0; _right <s.size();){
            while(s[_right] != ' ' && _right < s.size()){
                ++_right;
            }
            reverse(s.begin()+_left,s.begin()+_right);
            ++_right;
            _left = _right;
        }
        return s;
    }
};