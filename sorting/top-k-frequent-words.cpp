class Solution {
public:
struct Compare{
    bool operator()(const pair<string,int>& a, const pair<string,int>&b){
        return a.second > b.second;
    }
};

    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> m;
        vector<string> v;
        for(auto& s : words){
            m[s]++;
        }
        vector<pair<string,int>> v_p(m.begin(),m.end());
        stable_sort(v_p.begin(),v_p.end(),Compare());

        for(int i = 0;i<k;++i){
            v.push_back(v_p[i].first);
        }
    return v;
    }

};