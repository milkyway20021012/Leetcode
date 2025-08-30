class Solution {
public:
    string countAndSay(int n) {
        if(n == 1){
            return "1";
        }
        string ret;
        for(int i = 1; i <=n;++i){
            if(i == 1){
                ret = "1";
                continue;
            }
            string tmp;
            for(int left = 0,right = 0 ; right<ret.size();){
                char cur = ret[left];
                while(ret[right] == cur){
                    right++;
                }
                char count = (right - left) + '0';
                tmp += count;
                tmp += cur;
                left = right;
            }
            ret = tmp;
        }
        return ret;

    }
};