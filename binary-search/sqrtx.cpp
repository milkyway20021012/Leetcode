class Solution {
public:
    int mySqrt(int x) {
        if(x < 1) return 0;
        long long left = 1, right = x;
        while(left < right){
            long long mid = (left + right  + 1) / 2;
            if(mid * mid > x) right = mid -1 ;
            else left = mid;
        }
        return left;
    }
};