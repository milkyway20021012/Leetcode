class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int> s1; // 放 [1,n] 的內容
        stack<int> s2; // 先把 target 的內容放到 s2 中
        vector<string> ret; // 輸出結果
        int sz = target.size() - 1;
        for(int i = sz;i>=0;--i){
            s2.push(target[i]);
        }
        cout << s2.top();
        // n = 3 target : [1,3]
        for(int i = 1;i<=n;++i){
            int num = s2.top();
            s1.push(i);
            ret.push_back("Push");
            if(i != num){
                s1.pop();
                ret.push_back("Pop");
                continue;
            }
            s2.pop();
            if(s2.empty()){
                break;
            }
        }
        return ret;
        
    }
};
