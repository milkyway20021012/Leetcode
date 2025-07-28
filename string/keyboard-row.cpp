class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> row1 {'q','w','e','r','t','y','u','i','o','p'};
        unordered_set<char> row2 {'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> row3 {'z','x','c','v','b','n','m'};
        vector<string> ret;
        for(size_t i = 0;i<words.size();++i){
            int a = 0,b=0,c=0;
            for(size_t j = 0; j <words[i].size();++j){
                if(row1.count(words[i][j])) a = 1;
                if(row2.count(words[i][j])) b = 1;
                if(row3.count(words[i][j])) c = 1;
            }
            // asadfaedfghjkala
            if(a + b + c == 1){
                ret.emplace_back(words[i]);
            }
        }
        return ret;
    }
};