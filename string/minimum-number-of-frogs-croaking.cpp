class Solution {
public:
    int c = 0, r = 0, o = 0,a = 0,k = 0;
    int minNumberOfFrogs(string croakOfFrogs) {
        for (int i = 0; i < croakOfFrogs.size(); ++i) {
            if (croakOfFrogs[i] == 'c') {
                if (k != 0) {
                    --k;
                    ++c;
                } else {
                    ++c;
                }
                
            } else if (croakOfFrogs[i] == 'r') {
                if (c != 0) {
                    --c;
                    ++r;
                }
                else{
                    return -1;
                }
            } else if (croakOfFrogs[i] == 'o') {
                if (r != 0) {
                    --r;
                    ++o;
                }
                else{
                    return -1;
                }
            } else if (croakOfFrogs[i] == 'a') {
                if (o != 0) {
                    --o;
                    ++a;
                }
                else{
                    return -1;
                }
            } else {
                if (a != 0) {
                    --a;
                    ++k;
                }
                else{
                    return -1;
                }
            }
        }
        if(!(c || r || o || a)){
            return k;
        }
        return -1;
    }
};