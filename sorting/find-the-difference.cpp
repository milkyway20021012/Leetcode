class Solution {
public:
    char findTheDifference(string s, string t) {
        if (s == "") {
            return t[0];
        }
        char ret;
        unordered_map<char, int> ms;
        unordered_map<char,int> mt;
        for (auto& e : s) {
            ms[e]++;
        }
        for(auto & e: t){
            mt[e]++;
        }
        for(auto & e : t ){
            if(mt[e] != ms[e]){
                ret = e;
            }
        }
        return ret;
    }
};