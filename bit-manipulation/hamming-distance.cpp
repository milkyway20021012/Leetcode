class Solution {
public:
    int hammingDistance(int x, int y) {
        int ret = 0;
        for(int i = 0;i<=31;++i){
            int x1 = (x>>i) & 1;
            int y1 = (y>>i) & 1;
            if(x1 != y2){
                ret++;
            }
        }
        return ret;
    }
};