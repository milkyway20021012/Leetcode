class Solution {
public:
    char findTheDifference(string s, string t) {
        char ch = 0;
        for(auto& e : s){
            ch ^= e;
        }
        for(auto& e : t){
            ch ^= e;
        }
        return ch;
    }
};