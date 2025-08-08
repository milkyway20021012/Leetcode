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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int> um;

        ListNode* cur_A = headA;
        ListNode* cur_B = headB;
        while(cur_A){
            um[cur_A]++;
            cur_A = cur_A->next;
        }
        while(cur_B){
            if(um.find(cur_B) != um.end()){
                return cur_B;
            }
            cur_B = cur_B->next;
        }
        return nullptr;



    }
};