class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> m;
        for(auto& e : jewels){
            m[e]++;
        }
        int ret = 0;
        for(auto& e : stones){
            ret += m.count(e);
            cout << ret;
        }
        return ret;
    }
};