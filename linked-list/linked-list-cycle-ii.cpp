/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> st;
        st.insert(head);
        ListNode* slow = head;
        ListNode* fast = head;
        if(slow == nullptr || slow->next == nullptr){
            return nullptr;
        }
        while(fast){
            fast = fast->next->next;
            if(st.find(fast) != st.end()){
                return fast;
            }
            if(st.find(fast->next) != st.end()){
                return fast;
            }
            slow = slow->next;
            st.insert(slow);
        }
        return nullptr;
    }
};