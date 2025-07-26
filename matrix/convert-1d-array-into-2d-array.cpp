class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> v;
        int sz = original.size();
        if (n != (sz / m)) {
            return v;
        }
        v.resize(m);  // 開 m 個空間 => row
        int _row = 0; // 取第row個space
        int i = 0;    // idx
        int k = 0;
        while(k < sz){
            if(v[_row].size() == n){
                v[++_row].push_back(original[k++]);
            }
            else{
                v[_row].push_back(original[k++]);
            }
        }
        return v;
    }
};