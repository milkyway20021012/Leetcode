class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int> s1;
        unordered_map<int,int> mp;
        vector<string> v;
        int sz = target.size() - 1 ;
        for(auto& e : target){
            mp[e]++;
        }
        for(int i = 1;i<=n;++i){
            s1.push(i);
            v.push_back("Push");
            if(mp.find(i) == mp.end()){
                s1.pop();
                v.push_back("Pop");
            }
            if(i == target[sz]){
                break;
            }
        }
        return v;
        
    }
};
