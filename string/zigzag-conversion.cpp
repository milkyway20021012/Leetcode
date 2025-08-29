class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1){
            return s;
        }
        string ret;
        int d = 2 * numRows - 2;
        int n = s.size();
        // 先處理第一行
        for(int i = 0;i<n;i+=d){
            ret += s[i];
        }
        // 處理中間列
        for(int k = 1;k<numRows - 1;++k){ // 枚舉中間列數
            for(int i = k,j = d-k; i < n || j <n; i += d, j +=d){
                if(i < n) ret += s[i];
                if(j < n) ret += s[j];
            }
        }
        // 處理最後一行
        for(int i = numRows -1 ; i < s.size() ; i+=d){
            ret +=s[i];
        }
        return ret;
    }
};