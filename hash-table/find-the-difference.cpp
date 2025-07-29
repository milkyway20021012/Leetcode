class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int _left = 0,_right = 0;_left < s.size();++_left){
            if(s[_left] != t[_right]){
                return t[_right];
            }
            ++_right;
        }
        return t[t.size() - 1];
    }
};