class Solution {
public:
    int bitsum(int n){
        int sum = 0;
        while(n){
            int t = n % 10;
            sum += t * t;
            n /=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        // Two pointers
        int slow = n, fast = bitsum(n);
        while(slow != fast){
            slow = bitsum(n);
            fast = bitsum(bitsum(n));
        }
        return fast == 1;

    }
};