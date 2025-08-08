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
        while(fast != nullptr){
            slow = slow->next;
            if(fast->next == nullptr){
                return nullptr;
            }
            fast = fast->next->next;
            if(slow == fast){
                ListNode* ptr = head;
                if(ptr == slow){
                    return ptr;
                }
                ptr = ptr->next;
                slow = slow->next;
            }
        }
        return nullptr;
    }
};