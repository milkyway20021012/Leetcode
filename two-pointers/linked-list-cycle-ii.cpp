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
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            fast = fast->next->next;
            if(fast == slow || fast->next == slow){
                return slow;
            }
            slow = slow->next;
        }
        return nullptr;
    }
};