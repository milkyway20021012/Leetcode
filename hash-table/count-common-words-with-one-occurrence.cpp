class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> count;
        int ret = 0;
        for(auto& e: words1){
            count[e]++;
        }
        for(auto&e : words2){
            count[e]++;
        }
        for(auto& e : count){
            if(e.second == 2){
                ++ret;
            }
        }
        return ret;
    }
};