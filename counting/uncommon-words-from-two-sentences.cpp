class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> m;
        vector<string> ret;
        stringstream ss1(s1), ss2(s2);
        string word;
        while(ss1 >> word){
            m[word]++;
        }
        while(ss2 >> word){
            m[word]++;
        }
        unordered_map<string,int>::iterator it = m.begin();
        while(it != m.end()){
            if((*it).second == 1){
                ret.push_back((*it).first);
            }
            ++it;
        }
        return ret;
    }
};