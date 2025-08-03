class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> count1;
        unordered_map<string,int> count2;
        int ret = 0;
        for(auto& e: words1){
            count1[e]++;
        }
        for(auto&e : words2){
            count2[e]++;
        }
        for(auto& e : count1){
            if(e.second == 1 && count2[e.first] == 1){
                ++ret;
            }
        }
        return ret;
    }
};