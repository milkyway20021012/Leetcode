/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* lt_x = new ListNode();
        ListNode* lt_head = lt_x;
        ListNode* gt_x = new ListNode();
        ListNode* gt_head = gt_x; 
        // 用以遍历
        ListNode* cur = head;
        while(cur){
            if(cur->val < x){
                lt_x->next = cur;
                lt_x = lt_x->next;
            }
            else{
                gt_x->next = cur;
                gt_x = gt_x->next;
            }
            cur = cur->next;
        }
        /*
        lt : head->1->2->2
        gt   head->4->3->5
        */
        // 要把null加回来
        gt_x->next = nullptr;
        // 拼接
        lt_x->next = gt_head->next;
        return lt_head->next;
    }
};