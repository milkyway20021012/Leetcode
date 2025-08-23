class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ret(n+1);
        for(int i = 0;i<=n;++i){
            int count_1 = 0;
            for(int j = 0;j<=31;++j){
                if((i >> j) & 1 == 1){
                    count_1++;
                }
            }
            ret[i] = count_1;
        }
        return ret;
    }
};