class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ret = 0;
        for(int i = 1;i<timeSeries.size();++i){
             int d = timeSeries[i] - timeSeries[i - 1];
             if(d >= duration){
                ret += duration;
             }
             else{
                ret +=d;
             }
        }
        ret += duration;
        return ret;
    }
};