// Last updated: 7/26/2026, 4:01:38 PM
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
    void deleteNode(ListNode* node) {
        ListNode* temp = node;
        temp = node->next;
        node->val = temp->val;
        node->next = temp->next;
        delete temp;
    }
};