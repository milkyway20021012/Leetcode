class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int XOR = 0;
        for(auto& e : nums){
            XOR ^= e;
        }
        // 此時 XOR的結果是 3^5
        vector<int> ret(2);
        int mask = XOR&(-XOR); //我們要去找XOR中的最右邊第一個1

        for(auto& e : nums){
            if((e & mask) == 0){
                ret[0] ^= e;
            }
            else{
                ret[1] ^=e;
            }
        }
        return ret;
    }
};