class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int val = 0;
        priority_queue<int> pq;
        for(auto& e: nums){
            pq.push(e);
        }
        int i = 0;
        while(i < k){
            pq.pop();
            ++i;
        }
        val = pq.top();
        return val;
    }
};