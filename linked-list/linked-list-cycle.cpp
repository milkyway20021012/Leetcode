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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> st;
        ListNode* cur = head;
        while(cur){
            if(st.find(cur) != st.end()){
                return true;
            }
            st.insert(cur);
            cur = cur->next;
        }
        return false;
    }
};