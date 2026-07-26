// Last updated: 7/26/2026, 4:02:03 PM
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
        ListNode * slow = head;
        ListNode * fast = head;
        if(head == nullptr || head->next == nullptr){
            return false;
        }
        while(slow && fast && fast->next){
            slow = slow->next;
            fast = fast->next;
            fast = fast->next;
            if(slow == fast){
                return true;
            }
        }
        return false;

    }
};