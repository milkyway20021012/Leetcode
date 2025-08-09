/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* cur = head;
        unordered_map<Node*,Node*> hash;
        // 遍历一次，保存链表映射关系
        while(cur){
            // 用当前节点 new 新的节点
            Node* newnode = new Node(cur->val);
            hash[cur] = newnode;
            cur = cur->next;
        }
        // 第二次遍历，将所有新的节点连接起来
        cur = head;
        while(cur){
            hash[cur]->next = hash[cur->next];
            hash[cur]->random = hash[cur->random];
            cur = cur->next;
        }
        return hash[head];
    }
};