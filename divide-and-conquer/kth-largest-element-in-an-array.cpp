class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int val = 0;
        priority_deque<int> dq;
        for(auto& e: nums){
            dq.push(e);
        }
        int i = 0;
        while(i < k){
            dq.pop();
        }
        val = dq.top();
        return val;
    }
};