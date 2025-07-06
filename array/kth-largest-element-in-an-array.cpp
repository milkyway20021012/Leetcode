class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int val = 0;
        priority_queue<int> pq;
        for(auto& e: nums){
            pq.push(e);
        }
        while(--k){
            pq.pop();
        }
        val = pq.top();
        return val;
    }
};