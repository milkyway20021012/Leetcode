class Solution {
public:
    string countAndSay(int n) {
        if(n == 1){
            return "1";
        }
        string ret = "1";
        for(int i = 2; i <=n;++i){
            string tmp;
            for(int left = 0,right = 0 ; right<ret.size();){
                char cur = ret[left];
                while(ret[right] == cur){
                    right++;
                }
                string count = to_string(right - left);
                tmp += count;
                tmp += cur;
                left = right;
            }
            ret = tmp;
        }
        return ret;

    }
};